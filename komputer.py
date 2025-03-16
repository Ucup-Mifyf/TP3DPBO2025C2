from cpu import CPU
from ram import RAM
from harddrive import Harddrive

class Komputer:
    def __init__(self, nama, cpu, ram_list, harddrive):
        self.nama = nama
        self.cpu = cpu
        self.ram_list = ram_list
        self.harddrive = harddrive
    
    def tambah_ram(self, ram):
        self.ram_list.append(ram)
    
    def info(self):
        info_komputer = f"Komputer: {self.nama}\n"
        info_komputer += self.cpu.info() + "\n"
        for ram in self.ram_list:
            info_komputer += ram.info() + "\n"
        info_komputer += self.harddrive.info()
        return info_komputer

from perangkat import Perangkat

class CPU(Perangkat):
    def __init__(self, merk, nama, jumlah_core, kecepatan_ghz):
        super().__init__(merk, nama)
        self.jumlah_core = jumlah_core
        self.kecepatan_ghz = kecepatan_ghz
    
    def info(self):
        return f"CPU: {self.merk} {self.nama} ({self.jumlah_core} Core, {self.kecepatan_ghz}GHz)"

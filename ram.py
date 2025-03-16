from perangkat import Perangkat

class RAM(Perangkat):
    def __init__(self, merk, nama, kapasitas_gb, ddr):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas_gb
        self.ddr = ddr
    
    def info(self):
        return f"RAM: {self.merk} {self.nama} ({self.kapasitas_gb}GB, {self.ddr})"

from perangkat import Perangkat

class Harddrive(Perangkat):
    def __init__(self, merk, nama, kapasitas_gb, tipe_drive):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas_gb
        self.tipe_drive = tipe_drive
    
    def info(self):
        return f"Harddrive: {self.tipe_drive} {self.merk} {self.nama} ({self.kapasitas_gb}GB)"

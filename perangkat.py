from abc import ABC, abstractmethod

# Kelas abstrak sebagai dasar komponen
class Perangkat(ABC):
    def __init__(self, merk, nama):
        self.merk = merk
        self.nama = nama
    
    @abstractmethod
    def info(self):
        pass

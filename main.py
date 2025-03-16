from cpu import CPU
from ram import RAM
from harddrive import Harddrive
from komputer import Komputer

if __name__ == "__main__":
    cpu = CPU("Intel", "Core i7", 8, 3.4)
    ram1 = RAM("Corsair", "Vengeance", 16, "DDR5")
    harddrive = Harddrive("Samsung", "Evo", 1024, "SSD")
    
    komputer = Komputer("PC Abdul", cpu, [ram1, RAM("Corsair", "Vengeance", 8, "DDR4")], harddrive)
    komputer.tambah_ram(RAM("Kingston", "FURY", 16, "DDR5"))
    
    print(komputer.info())

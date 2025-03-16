#include <iostream>
#include "komputer.h"

int main() {
    CPU cpu("Intel", "Core i7", 8, 3.4);
    RAM ram1("Corsair", "Vengeance", 16, "DDR5");
    Harddrive harddrive("Samsung", "Evo", 1024, "SSD");

    Komputer komputer("PC Abdul", cpu, {ram1, RAM("Corsair", "Vengeance", 8, "DDR4")}, harddrive);
    komputer.tambah_ram(RAM("Kingston", "FURY", 16, "DDR5"));

    std::cout << komputer.info() << std::endl;
    return 0;
}

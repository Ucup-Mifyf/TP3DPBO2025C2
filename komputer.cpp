#include "komputer.h"

Komputer::Komputer(std::string nama, CPU cpu, std::vector<RAM> ram_list, Harddrive harddrive)
    : nama(nama), cpu(cpu), ram_list(ram_list), harddrive(harddrive) {}

void Komputer::tambah_ram(RAM ram) {
    ram_list.push_back(ram);
}

std::string Komputer::info() const {
    std::string info_komputer = "Komputer: " + nama + "\n";
    info_komputer += cpu.info() + "\n";
    for (const auto& ram : ram_list) {
        info_komputer += ram.info() + "\n";
    }
    info_komputer += harddrive.info();
    return info_komputer;
}

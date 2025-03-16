#ifndef KOMPUTER_H
#define KOMPUTER_H

#include <vector>
#include "cpu.h"
#include "ram.h"
#include "harddrive.h"

class Komputer {
private:
    std::string nama;
    CPU cpu;
    std::vector<RAM> ram_list;
    Harddrive harddrive;

public:
    Komputer(std::string nama, CPU cpu, std::vector<RAM> ram_list, Harddrive harddrive);
    void tambah_ram(RAM ram);
    std::string info() const;
};

#endif

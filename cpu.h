#ifndef CPU_H
#define CPU_H

#include "perangkat.h"

class CPU : public Perangkat {
private:
    int jumlah_core;
    double kecepatan_ghz;

public:
    CPU(std::string merk, std::string nama, int jumlah_core, double kecepatan_ghz);
    std::string info() const override;
};

#endif

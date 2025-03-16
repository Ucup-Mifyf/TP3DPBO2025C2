#ifndef RAM_H
#define RAM_H

#include "perangkat.h"

class RAM : public Perangkat {
private:
    int kapasitas_gb;
    std::string ddr;

public:
    RAM(std::string merk, std::string nama, int kapasitas_gb, std::string ddr);
    std::string info() const override;
};

#endif

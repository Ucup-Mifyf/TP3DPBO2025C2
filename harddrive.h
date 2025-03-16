#ifndef HARDDRIVE_H
#define HARDDRIVE_H

#include "perangkat.h"

class Harddrive : public Perangkat {
private:
    int kapasitas_gb;
    std::string tipe_drive;

public:
    Harddrive(std::string merk, std::string nama, int kapasitas_gb, std::string tipe_drive);
    std::string info() const override;
};

#endif

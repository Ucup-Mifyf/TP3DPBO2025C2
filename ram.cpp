#include "ram.h"

RAM::RAM(std::string merk, std::string nama, int kapasitas_gb, std::string ddr)
    : Perangkat(merk, nama), kapasitas_gb(kapasitas_gb), ddr(ddr) {}

std::string RAM::info() const {
    return "RAM: " + merk + " " + nama + " (" + std::to_string(kapasitas_gb) + "GB, " + ddr + ")";
}

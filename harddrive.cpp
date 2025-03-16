#include "harddrive.h"

Harddrive::Harddrive(std::string merk, std::string nama, int kapasitas_gb, std::string tipe_drive)
    : Perangkat(merk, nama), kapasitas_gb(kapasitas_gb), tipe_drive(tipe_drive) {}

std::string Harddrive::info() const {
    return "Harddrive: " + tipe_drive + " " + merk + " " + nama + " (" + std::to_string(kapasitas_gb) + "GB)";
}

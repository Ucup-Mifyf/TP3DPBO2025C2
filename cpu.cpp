#include "cpu.h"

CPU::CPU(std::string merk, std::string nama, int jumlah_core, double kecepatan_ghz)
    : Perangkat(merk, nama), jumlah_core(jumlah_core), kecepatan_ghz(kecepatan_ghz) {}

std::string CPU::info() const {
    return "CPU: " + merk + " " + nama + " (" + std::to_string(jumlah_core) +
           " Core, " + std::to_string(kecepatan_ghz) + "GHz)";
}

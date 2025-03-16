#ifndef PERANGKAT_H
#define PERANGKAT_H

#include <iostream>
#include <string>

class Perangkat {
protected:
    std::string merk;
    std::string nama;

public:
    Perangkat(std::string merk, std::string nama) : merk(merk), nama(nama) {}
    virtual std::string info() const = 0; // Pure virtual function
    virtual ~Perangkat() = default;
};

#endif

#ifndef DOSEN_H
#define DOSEN_H

#include <iostream>
#include <string>
#include "Pegawai.h"
using namespace std;

class Dosen : public Pegawai { 
private:
    string keahlian;
public:
    Dosen(string nip, string nama, string jalan, string kota, string keahlian)
        : Pegawai(nip, nama, jalan, kota) {
        this->keahlian = keahlian;
    }

    string getInfo() override {
        return "[DOSEN] " + Pegawai::getInfo() + " | Keahlian: " + keahlian;
    }
};

#endif
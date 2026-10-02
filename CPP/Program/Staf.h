#ifndef STAF_H
#define STAF_H

#include <iostream>
#include <string>
#include "Pegawai.h"
using namespace std;

class Staf : public Pegawai { 
private:
    string divisi;
public:
    Staf(string nip, string nama, string jalan, string kota, string divisi)
        : Pegawai(nip, nama, jalan, kota) {
        this->divisi = divisi;
    }

    string getInfo() override {
        return "[STAF]  " + Pegawai::getInfo() + " | Divisi: " + divisi;
    }
};

#endif
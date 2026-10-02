#ifndef PEGAWAI_H
#define PEGAWAI_H

#include <iostream>
#include <string>
#include "Alamat.h"
using namespace std;

class Pegawai {
protected:
    string nip;
    string nama;
    Alamat alamat; // Konsep COMPOSITION

public:
    Pegawai(string nip, string nama, string jalan, string kota) : alamat(jalan, kota) {
        this->nip = nip;
        this->nama = nama;
    }

    virtual string getInfo() {
        return "NIP: " + nip + " | Nama: " + nama + " | Alamat: " + alamat.getAlamatLengkap();
    }
};

#endif
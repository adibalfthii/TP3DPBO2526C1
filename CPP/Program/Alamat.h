#ifndef ALAMAT_H
#define ALAMAT_H

#include <iostream>
#include <string>
using namespace std;

class Alamat {
private:
    string jalan;
    string kota;
public:
    Alamat(string jalan = "", string kota = "") {
        this->jalan = jalan;
        this->kota = kota;
    }
    string getAlamatLengkap() {
        return jalan + ", " + kota;
    }
};

#endif  
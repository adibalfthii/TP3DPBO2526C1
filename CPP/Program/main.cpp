#include <iostream>
#include <vector>
#include "Dosen.h"
#include "Staf.h"

using namespace std;

int main() {
    // Konsep ARRAY OF OBJECT (menggunakan Vector)
    // Kita memakai pointer (*) agar fungsi override berjalan sempurna saat di-loop
    vector<Pegawai*> list_pegawai;

    // Menambahkan data statis (kondisi awal)
    list_pegawai.push_back(new Dosen("D001", "Pak Budi", "Jl. Setiabudhi", "Bandung", "Machine Learning"));
    list_pegawai.push_back(new Staf("S001", "Mbak Siti", "Jl. Gegerkalong", "Bandung", "Admin Akademik"));

    cout << "=== DATA PEGAWAI AWAL ===\n";
    for (Pegawai* p : list_pegawai) {
        cout << p->getInfo() << endl;
    }

    cout << "\nMenambahkan data baru secara statis...\n\n";

    // Menambahkan data baru
    list_pegawai.push_back(new Dosen("D002", "Bu Rina", "Jl. Dipatiukur", "Bandung", "Software Engineering"));
    list_pegawai.push_back(new Staf("S002", "Mas Andi", "Jl. Dago", "Bandung", "IT Support"));

    // Menampilkan (print) data setelah ditambahkan sesuai syarat tugas
    cout << "=== DATA PEGAWAI SETELAH DITAMBAHKAN ===\n";
    for (Pegawai* p : list_pegawai) {
        cout << p->getInfo() << endl;
    }

    // Clean up memori (Good practice C++)
    for (Pegawai* p : list_pegawai) {
        delete p;
    }

    return 0;
}
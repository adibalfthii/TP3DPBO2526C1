**Tugas Praktikum 3 DPBO 2026 - Kelas C1**

Topik: Sistem Kepegawaian Kampus (Composition & Hierarchical Inheritance)

Nama: Muh. Adib Al-Fathi
NIM: 2500418 
Kelas: C1

**Janji **
Saya Muh. Adib Al-Fathi dengan NIM 2500418 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

**1. Desain Arsitektur Sistem (Class Diagram)**

Tugas ini pakai gabungan konsep Composition dan Hierarchical Inheritance. Kira-kira begini gambaran relasi antar class-nya:
<img width="594" height="521" alt="diagramClasstp3" src="https://github.com/user-attachments/assets/d1ce52a4-e46f-4d29-a131-5d5d8865043b" />

**2. Penjelasan Atribut dan Method**
  - Class Alamat
    1. Atribut: jalan dan kota. Dipakai buat nyimpen data lokasi.
    2. Method: getAlamatLengkap() buat ngegabungin nama jalan sama kota jadi satu kalimat utuh.
  - Class Pegawai (Parent)
    1. Atribut: nip, nama, dan objek alamat (dari class Alamat). Sengaja pakai protected biar atributnya bisa langsung diakses sama anak-anaknya.
    2. Method: getInfo() buat nampilin data identitas umum pegawai.
  - Class Dosen (Child 1)
    1. Atribut Tambahan: keahlian (bidang ngajarnya apa).
    2. Method: Override getInfo() buat manggil info dasar dari parent, terus ditambahin sama keahliannya.
  - Class Staf (Child 2)
    1. Atribut Tambahan: divisi (tempat dia kerja/dinas).
    2. Method: Override getInfo() juga, tapi ditambahin detail divisinya.

 **3. Penjelasan Desain OOP & Error Handling**
 Di program ini, aku nerapin beberapa konsep penting:
 - Composition: Kelihatan di relasi Pegawai sama Alamat. Intinya, si Pegawai bener-bener "memiliki" Alamat di dalam dirinya. Kalau objek Pegawai-nya dihapus, alamatnya juga otomatis ikut hilang.
 - Hierarchical Inheritance: Ini pas satu parent (Pegawai) nurunin sifatnya ke dua anak sekaligus (Dosen dan Staf).
 - Array of Object: Biar gampang nampung banyak data, aku pake list/koleksi (pakai Vector di C++, List biasa di Python, dan ArrayList di Java) buat nyimpen semua objek pegawainya di satu tempat.

**Error Handling & Validasi:**
penanganan (Error Handling) difokuskan pada manajemen memori dan struktur data:
- Aman dari Overload: Penggunaan `vector` (C++), list dinamis (Python), dan `ArrayList` (Java) memastikan program tidak akan terkena error *Index Out of Bounds* saat data ditambahkan.
- Memory Clean-Up: Khusus untuk bahasa C++, sudah disematkan *loop* `delete` di akhir program untuk membersihkan alokasi memori *pointer* objek agar tidak terjadi *memory leak*.

**4. Alur Program pas Di-run**
- Pas awal jalan, program bakal nyiapin Array/List kosong.
- Terus, program otomatis nge-generate 2 data statis (1 Dosen & 1 Staf) dan dimasukin ke dalem array itu.
- Program nge-print isi array-nya (ini jadi "Data Awal").
- Setelah itu, program nge-hardcode penambahan 2 data baru lagi.
- Terakhir, program nge-print ulang semua isi array yang sekarang udah nambah jadi 4 data ("Data Setelah Ditambahkan").

**5. Dokumentasi Bukti Eksekusi**
Ini screenshot hasil run terminal buat semua bahasanya (C++, Python, dan Java):
-  C++
<img width="698" height="219" alt="output_cpp" src="https://github.com/user-attachments/assets/6fdb631c-1f9c-4a35-9136-70d6da63c30d" />

- Python
<img width="710" height="257" alt="output_python" src="https://github.com/user-attachments/assets/dbcb0e0e-8d0f-4006-8ef5-5d5307818d1f" />

- Java
<img width="673" height="232" alt="output_java" src="https://github.com/user-attachments/assets/f68b945c-171e-4b04-88d8-a2491e4b16c7" />






 

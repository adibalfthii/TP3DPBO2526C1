class Alamat:
    def __init__(self, jalan, kota):
        self.jalan = jalan
        self.kota = kota
        
    def get_alamat_lengkap(self):
        return f"{self.jalan}, {self.kota}"

class Pegawai:
    def __init__(self, nip, nama, jalan, kota):
        self.nip = nip
        self.nama = nama
        self.alamat = Alamat(jalan, kota)
        
    def tampilkan_info_dasar(self):
        return f"NIP: {self.nip} | Nama: {self.nama} | Alamat: {self.alamat.get_alamat_lengkap()}"

class Dosen(Pegawai):
    def __init__(self, nip, nama, jalan, kota, keahlian):
        super().__init__(nip, nama, jalan, kota)
        self.keahlian = keahlian
        
    def get_info(self):
        return f"[DOSEN] {self.tampilkan_info_dasar()} | Keahlian: {self.keahlian}"
    
class Staf(Pegawai):
    def __init__(self, nip, nama, jalan, kota, divisi):
        super().__init__(nip, nama, jalan, kota)
        self.divisi = divisi
        
    def get_info(self):
        return f"[STAF] {self.tampilkan_info_dasar()} | Divisi: {self.divisi}"

def main():
    list_pegawai = []
    list_pegawai.append(Dosen("D001", "Pak Budi", "Jl. Setiabudhi", "Bandung", "Machine Learning"))
    list_pegawai.append(Staf("S001", "Mbak Siti", "Jl. Gegerkalong", "Bandung", "Administrasi Akademik"))
    
    print("=== DATA PEGAWAI AWAL ===")
    for p in list_pegawai:
        print(p.get_info())
        
    print("\nMenambahkan data baru secara statis...\n")
    
    list_pegawai.append(Dosen("D002", "Bu Rina", "Jl. Dipatiukur", "Bandung", "Software Engineering"))
    list_pegawai.append(Staf("S002", "Mas Andi", "Jl. Dago", "Bandung", "IT Support"))
    
    print("=== DATA PEGAWAI SETELAH DITAMBAHKAN ===")
    for p in list_pegawai:
        print(p.get_info())

if __name__ == "__main__":
    main()
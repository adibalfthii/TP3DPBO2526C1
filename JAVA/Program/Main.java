import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // Konsep ARRAY OF OBJECT (Di Java kita pakai ArrayList)
        ArrayList<Pegawai> listPegawai = new ArrayList<>();

        // Menambahkan data statis (awal)
        listPegawai.add(new Dosen("D001", "Pak Budi", "Jl. Setiabudhi", "Bandung", "Machine Learning"));
        listPegawai.add(new Staf("S001", "Mbak Siti", "Jl. Gegerkalong", "Bandung", "Administrasi Akademik"));

        System.out.println("=== DATA PEGAWAI AWAL ===");
        for (Pegawai p : listPegawai) {
            System.out.println(p.getInfo());
        }

        System.out.println("\nMenambahkan data baru secara statis...\n");

        // Menambahkan data baru
        listPegawai.add(new Dosen("D002", "Bu Rina", "Jl. Dipatiukur", "Bandung", "Software Engineering"));
        listPegawai.add(new Staf("S002", "Mas Andi", "Jl. Dago", "Bandung", "IT Support"));

        // Menampilkan data setelah ditambahkan
        System.out.println("=== DATA PEGAWAI SETELAH DITAMBAHKAN ===");
        for (Pegawai p : listPegawai) {
            System.out.println(p.getInfo());
        }
    }
}
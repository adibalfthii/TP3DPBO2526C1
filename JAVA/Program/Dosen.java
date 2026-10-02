public class Dosen extends Pegawai {
    private String keahlian;

    public Dosen(String nip, String nama, String jalan, String kota, String keahlian) {
        super(nip, nama, jalan, kota);
        this.keahlian = keahlian;
    }

    @Override
    public String getInfo() {
        return "[DOSEN] " + super.getInfo() + " | Keahlian: " + keahlian;
    }
}
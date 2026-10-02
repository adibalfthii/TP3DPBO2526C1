public class Pegawai {
    protected String nip;
    protected String nama;
    protected Alamat alamat; // Konsep COMPOSITION: Pegawai mempunyai Alamat

    public Pegawai(String nip, String nama, String jalan, String kota) {
        this.nip = nip;
        this.nama = nama;
        this.alamat = new Alamat(jalan, kota);
    }

    public String getInfo() {
        return "NIP: " + nip + " | Nama: " + nama + " | Alamat: " + alamat.getAlamatLengkap();
    }
}
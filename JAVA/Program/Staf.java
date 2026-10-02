public class Staf extends Pegawai {
    private String divisi;

    public Staf(String nip, String nama, String jalan, String kota, String divisi) {
        super(nip, nama, jalan, kota);
        this.divisi = divisi;
    }

    @Override
    public String getInfo() {
        return "[STAF]  " + super.getInfo() + " | Divisi: " + divisi;
    }
}
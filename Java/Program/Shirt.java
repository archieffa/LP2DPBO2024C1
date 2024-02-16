/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

public class Shirt extends Clothing 
{
    private String warna;
    private String tipeSleeve;

    // konstruktor default Shirt tanpa parameter
    public Shirt() 
    {
        
    }

    // konstruktor Shirt dengan parameter
    public Shirt(String produkID, String nama, String merk, String harga, String ukuran, String material, String jenis, String warna, String tipeSleeve) 
    {
        super(produkID, nama, merk, harga, ukuran, material, jenis);
        this.warna = warna;
        this.tipeSleeve = tipeSleeve;
    }

    public String getWarna() 
    {
        return warna;
    }

    public void setWarna(String warna) 
    {
        this.warna = warna;
    }

    public String getTipeSleeve() 
    {
        return tipeSleeve;
    }

    public void setTipeSleeve(String tipeSleeve) 
    {
        this.tipeSleeve = tipeSleeve;
    }
}
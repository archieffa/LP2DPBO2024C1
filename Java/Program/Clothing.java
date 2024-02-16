/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */ 

public class Clothing extends Product 
{
    private String ukuran;
    private String material;
    private String jenis;

    // konstruktor default Clothing tanpa parameter
    public Clothing() 
    {
        
    }

    // konstruktor Clothing dengan parameter
    public Clothing(String produkID, String nama, String merk, String harga, String ukuran, String material, String jenis) 
    {
        super(produkID, nama, merk, harga);
        this.ukuran = ukuran;
        this.material = material;
        this.jenis = jenis;
    }

    public String getUkuran() 
    {
        return ukuran;
    }

    public void setUkuran(String ukuran) 
    {
        this.ukuran = ukuran;
    }

    public String getMaterial() 
    {
        return material;
    }

    public void setMaterial(String material) 
    {
        this.material = material;
    }

    public String getJenis() 
    {
        return jenis;
    }

    public void setJenis(String jenis) 
    {
        this.jenis = jenis;
    }
}
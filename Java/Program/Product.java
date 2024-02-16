/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

public class Product 
{
    private String produkID;
    private String nama;
    private String merk; 
    private String harga;

    // konstruktor default Product tanpa parameter
    public Product() 
    {
        
    }

    // konstruktor Product dengan parameter
    public Product(String produkID, String nama, String merk, String harga) 
    {
        this.produkID = produkID;
        this.nama = nama;
        this.merk = merk;
        this.harga = harga;
    }

    public String getProdukID() 
    {
        return produkID;
    }

    public void setProdukID(String produkID) 
    {
        this.produkID = produkID;
    }

    public String getNama() 
    {
        return nama;
    }

    public void setNama(String nama) 
    {
        this.nama = nama;
    }

    public String getMerk() 
    {
        return merk;
    }

    public void setMerk(String merk) 
    {
        this.merk = merk;
    }

    public String getHarga() 
    {
        return harga;
    }

    public void setHarga(String harga) 
    {
        this.harga = harga;
    }
}
/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

#include <string>

using namespace std; 

// mendefinisikan kelas Product
class Product 
{
    // atribut private
    private:
        string produkID;
        string nama;
        string merk;
        string harga;

    // atribut public
    public:
        // konstruktor default Product tanpa parameter
        Product() 
        {

        }

        // konstruktor Product dengan parameter
        Product(string produkID, string nama, string merk, string harga)
            : produkID(produkID), nama(nama), merk(merk), harga(harga) 
            {

            }

        // fungsi-fungsi untuk mengambil dan mengatur nilai atribut-atribut pada kelas Product
        string getProdukID() 
        {
            return produkID;
        }

        void setProdukID(string produkID) 
        {
            this->produkID = produkID;
        }

        string getNama() 
        {
            return nama;
        }

        void setNama(string nama) 
        {
            this->nama = nama;
        }

        string getMerk() 
        {
            return merk;
        }

        void setMerk(string merk) 
        {
            this->merk = merk;
        }

        string getHarga() 
        {
            return harga;
        }

        void setHarga(string harga) 
        {
            this->harga = harga;
        }
};
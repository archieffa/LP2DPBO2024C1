/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

#include "Product.cpp"

// mendefinisikan kelas Clothing yang merupakan turunan dari kelas Product
class Clothing : public Product 
{
    // atribut private
    private:
        string ukuran;
        string material;
        string jenis;

    // atribut public
    public:
        // konstruktor default Clothing tanpa parameter
        Clothing() 
        {

        }

        // konstruktor dengan parameter untuk kelas Clothing yang juga menginisialisasi data dari kelas Product
        Clothing(string produkID, string nama, string merk, string harga, string ukuran, string material, string jenis)
            : Product(produkID, nama, merk, harga), ukuran(ukuran), material(material), jenis(jenis) 
            {

            }

        // fungsi-fungsi untuk mengambil dan mengatur nilai atribut-atribut pada kelas Clothing
        string getUkuran() 
        {
            return ukuran;
        }

        void setUkuran(string ukuran) 
        {
            this->ukuran = ukuran;
        }

        string getMaterial() 
        {
            return material;
        }

        void setMaterial(string material) 
        {
            this->material = material;
        }

        string getJenis() 
        {
            return jenis;
        }

        void setJenis(string jenis) 
        {
            this->jenis = jenis;
        }
};
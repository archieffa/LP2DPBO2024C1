/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

#include "Clothing.cpp"

// mendefinisikan kelas Shirt yang merupakan turunan dari kelas Clothing
class Shirt : public Clothing 
{
    // atribut private
    private:
        string warna;
        string tipeSleeve;

    // atribut public
    public:
        // konstruktor default Shirt tanpa parameter
        Shirt() 
        { 

        }
        
        // konstruktor dengan parameter untuk kelas Shirt yang juga menginisialisasi data dari kelas Product dan Clothing
        Shirt(string produkID, string nama, string merk, string harga, string ukuran, string material, string jenis, string warna, string tipeSleeve)
            : Clothing(produkID, nama, merk, harga, ukuran, material, jenis), warna(warna), tipeSleeve(tipeSleeve) 
            {

            }

        // fungsi-fungsi untuk mengambil dan mengatur nilai atribut-atribut pada kelas Shirt
        string getWarna() 
        {
            return warna;
        }

        void setWarna(string warna) 
        {
            this->warna = warna;
        }

        string getTipeSleeve() 
        {
            return tipeSleeve;
        }

        void setTipeSleeve(string tipeSleeve) 
        {
            this->tipeSleeve = tipeSleeve;
        }
};

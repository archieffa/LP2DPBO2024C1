/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

#include "Shirt.cpp"
#include <iostream>
#include <cstring> 
#include <iomanip>  // untuk mengatur output dengan presisi, lebar, dll
#include <list>

using namespace std;

void tampilanTabel(list<Shirt> llist)
{
    // mencari panjang maksimum untuk setiap kolom
    int panjangMaxProdukID = 0;
    int panjangMaxNama = 0;
    int panjangMaxMerk = 0;
    int panjangMaxHarga = 0;
    int panjangMaxUkuran = 0;
    int panjangMaxMaterial = 0;
    int panjangMaxJenis = 0;
    int panjangMaxWarna = 0;
    int panjangMaxTipeSleeve = 0;

    // mencari panjang maksimum untuk setiap kolom dalam tabel
    for(list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++) 
    {
        // menghitung panjang ID saat ini
        int currentProdukIDLength = it->getProdukID().length();
        if(currentProdukIDLength > panjangMaxProdukID) 
        {
            panjangMaxProdukID = currentProdukIDLength;
        }
        
        // menghitung panjang nama saat ini
        int currentNamaLength = it->getNama().length();
        if(currentNamaLength > panjangMaxNama) 
        {
            panjangMaxNama = currentNamaLength;
        }
        
        // menghitung panjang Merk saat ini
        int currentMerkLength = it->getMerk().length();
        if(currentMerkLength > panjangMaxMerk) 
        {
            panjangMaxMerk = currentMerkLength;
        }
        
        // menghitung panjang TipeSleeve saat ini
        int currentHargaLength = it->getHarga().length();
        if(currentHargaLength > panjangMaxHarga) 
        {
            panjangMaxHarga = currentHargaLength;
        }

        int currentUkuranLength = it->getUkuran().length();
        if(currentUkuranLength > panjangMaxUkuran) 
        {
            panjangMaxUkuran = currentUkuranLength;
        }

        int currentMaterialLength = it->getMaterial().length();
        if(currentMaterialLength > panjangMaxMaterial) 
        {
            panjangMaxMaterial = currentMaterialLength;
        }

        int currentJenisLength = it->getJenis().length();
        if(currentJenisLength > panjangMaxJenis) 
        {
            panjangMaxJenis = currentJenisLength;
        }

        int currentWarnaLength = it->getWarna().length();
        if(currentWarnaLength > panjangMaxWarna) 
        {
            panjangMaxWarna = currentWarnaLength;
        }

        int currentTipeSleeveLength = it->getTipeSleeve().length();
        if(currentTipeSleeveLength > panjangMaxTipeSleeve) 
        {
            panjangMaxTipeSleeve = currentTipeSleeveLength;
        }
    }

    // mencetak pesan "Data kosong" jika tabel kosong
    if(llist.empty()) 
    {
        cout << '\n' << "Data kosong." << '\n';
    }
    else
    {
        // menampilkan tabel dengan lebar kolom yang sesuai
        // menampilkan garis pembatas
        cout << "\n+-" << string(max(panjangMaxProdukID, (int)strlen("ID Produk")), '-') << "-+-"
            << string(max(panjangMaxNama, (int)strlen("Nama")), '-') << "-+-"
            << string(max(panjangMaxMerk, (int)strlen("Merk")), '-') << "-+-"
            << string(max(panjangMaxHarga, (int)strlen("Harga")), '-') << "-+-"
            << string(max(panjangMaxUkuran, (int)strlen("Ukuran")), '-') << "-+-"
            << string(max(panjangMaxMaterial, (int)strlen("Material")), '-') << "-+-"
            << string(max(panjangMaxJenis, (int)strlen("Jenis")), '-') << "-+-"
            << string(max(panjangMaxWarna, (int)strlen("Warna")), '-') << "-+-"
            << string(max(panjangMaxTipeSleeve, (int)strlen("TipeSleeve")), '-') << "-+" << '\n';

        cout << left; // mengatur rata kiri untuk semua output

        // menampilkan kepala tabel dengan lebar kolom yang sesuai
        // setw digunakan untuk mengatur lebar output agar sesuai dengan lebar maksimum yang ditetapkan dan 
        // setiap kolom memiliki lebar yang sama
        cout << "| " << setw(max(panjangMaxProdukID, (int)strlen("ID Produk"))) << "ID Produk" << " | "
            << setw(max(panjangMaxNama, (int)strlen("Nama"))) << "Nama" << " | "
            << setw(max(panjangMaxMerk, (int)strlen("Merk"))) << "Merk" << " | "
            << setw(max(panjangMaxHarga, (int)strlen("Harga"))) << "Harga" << " | "
            << setw(max(panjangMaxUkuran, (int)strlen("Ukuran"))) << "Ukuran" << " | "
            << setw(max(panjangMaxMaterial, (int)strlen("Material"))) << "Material" << " | "
            << setw(max(panjangMaxJenis, (int)strlen("Jenis"))) << "Jenis" << " | "
            << setw(max(panjangMaxWarna, (int)strlen("Warna"))) << "Warna" << " | "
            << setw(max(panjangMaxTipeSleeve, (int)strlen("TipeSleeve"))) << "TipeSleeve" << " |" << '\n';
 
        // menampilkan garis pembatas
        cout << "+-" << string(max(panjangMaxProdukID, (int)strlen("ID Produk")), '-') << "-+-"
            << string(max(panjangMaxNama, (int)strlen("Nama")), '-') << "-+-"
            << string(max(panjangMaxMerk, (int)strlen("Merk")), '-') << "-+-"
            << string(max(panjangMaxHarga, (int)strlen("Harga")), '-') << "-+-"
            << string(max(panjangMaxUkuran, (int)strlen("Ukuran")), '-') << "-+-"
            << string(max(panjangMaxMaterial, (int)strlen("Material")), '-') << "-+-"
            << string(max(panjangMaxJenis, (int)strlen("Jenis")), '-') << "-+-"
            << string(max(panjangMaxWarna, (int)strlen("Warna")), '-') << "-+-"
            << string(max(panjangMaxTipeSleeve, (int)strlen("TipeSleeve")), '-') << "-+" << '\n';

        // menampilkan data anggota DPR
        for(list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++) 
        {
            cout << "| " << setw(max(panjangMaxProdukID, (int)strlen("ID Produk"))) << it->getProdukID() << " | "
                << setw(max(panjangMaxNama, (int)strlen("Nama"))) << it->getNama() << " | "
                << setw(max(panjangMaxMerk, (int)strlen("Merk"))) << it->getMerk() << " | "
                << setw(max(panjangMaxHarga, (int)strlen("Harga"))) << it->getHarga() << " | "
                << setw(max(panjangMaxUkuran, (int)strlen("Ukuran"))) << it->getUkuran() << " | "
                << setw(max(panjangMaxMaterial, (int)strlen("Material"))) << it->getMaterial() << " | "
                << setw(max(panjangMaxJenis, (int)strlen("Jenis"))) << it->getJenis() << " | "
                << setw(max(panjangMaxWarna, (int)strlen("Warna"))) << it->getWarna() << " | "
                << setw(max(panjangMaxTipeSleeve, (int)strlen("TipeSleeve"))) << it->getTipeSleeve() << " |" << '\n';
        }

        // menampilkan garis pembatas
        cout << "+-" << string(max(panjangMaxProdukID, (int)strlen("ID Produk")), '-') << "-+-"
            << string(max(panjangMaxNama, (int)strlen("Nama")), '-') << "-+-"
            << string(max(panjangMaxMerk, (int)strlen("Merk")), '-') << "-+-"
            << string(max(panjangMaxHarga, (int)strlen("Harga")), '-') << "-+-"
            << string(max(panjangMaxUkuran, (int)strlen("Ukuran")), '-') << "-+-"
            << string(max(panjangMaxMaterial, (int)strlen("Material")), '-') << "-+-"
            << string(max(panjangMaxJenis, (int)strlen("Jenis")), '-') << "-+-"
            << string(max(panjangMaxWarna, (int)strlen("Warna")), '-') << "-+-"
            << string(max(panjangMaxTipeSleeve, (int)strlen("TipeSleeve")), '-') << "-+" << '\n';
    }
    cout << '\n';
}

void tambahDataShirt(list<Shirt>& llist) 
{
    // deklarasi variabel
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    cin.ignore();  // untuk membersihkan newline dari input sebelumnya
    
    for(int i = 0; i < n; ++i) 
    {
        string produkID, nama, merk, harga, ukuran, material, jenis, warna, tipeSleeve;
        cout << "ID Produk: ";
        getline(cin, produkID);
        cout << "Nama: ";
        getline(cin, nama);
        cout << "Merk: ";
        getline(cin, merk);
        cout << "Harga: ";
        getline(cin, harga);
        cout << "Ukuran: ";
        getline(cin, ukuran);
        cout << "Material: ";
        getline(cin, material);
        cout << "Jenis: ";
        getline(cin, jenis);
        cout << "Warna: ";
        getline(cin, warna);
        cout << "Tipe Sleeve: ";
        getline(cin, tipeSleeve);

        Shirt shirt(produkID, nama, merk, harga, ukuran, material, jenis, warna, tipeSleeve);
        llist.push_back(shirt);
    }

    cout << '\n' << "Data telah ditambahkan." << '\n';
}

int main() 
{
    list<Shirt> llist;

    cout << '\n' << "Selamat datang di program manajemen Clothing Brand!" << '\n';

    int pilih;  // variabel untuk memilih fitur
    do 
    {
        // menampilkan pilihan fitur
        cout << '\n' << "Silahkan pilih salah satu fitur dari opsi berikut:" << '\n';
        cout << "1. Tambah Data" << '\n';
        cout << "2. Tampilkan Data" << '\n';
        cout << "3. Selesai" << '\n';
        cout << "Fitur yang dipilih: ";
        cin >> pilih;  // memilih fitur
        cin.ignore();  // untuk membersihkan newline dari input sebelumnya

        // memproses pilihan fitur yang dipilih
        switch(pilih) 
        {
            case 1:  // menambah data
                tambahDataShirt(llist);
                tampilanTabel(llist); 
                break;

            case 2:  // menampilkan data
                tampilanTabel(llist);
                break;

            case 3:  // selesai
                cout << '\n' << "Terima kasih telah menggunakan fitur-fitur dari program manajemen Clothing Brand!" << '\n';
                break;

            default:
                cout << '\n' << "Pilihan tidak valid. Silahkan pilih kembali." << '\n';
                break;
        }
    } 
    while(pilih != 3);

    return 0;
}
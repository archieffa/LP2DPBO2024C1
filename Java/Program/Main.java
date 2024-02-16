/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */ 

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        List<Shirt> shirtList = new ArrayList<>();  

        System.out.println("\nSelamat datang di program manajemen Clothing Brand!\n");

        int choice;
        do {
            System.out.println("Silahkan pilih salah satu fitur dari opsi berikut:");
            System.out.println("1. Tambah Data");
            System.out.println("2. Tampilkan Data");
            System.out.println("3. Selesai");
            System.out.print("Fitur yang dipilih: ");
            choice = scanner.nextInt();
            scanner.nextLine(); 

            switch(choice) {
                case 1:
                    tambahDataShirt(scanner, shirtList);
                    tampilanTabel(shirtList);
                    break;

                case 2:
                    tampilanTabel(shirtList);
                    break;

                case 3:
                    System.out.println("\nTerima kasih telah menggunakan fitur-fitur dari program manajemen Clothing Brand!");
                    break;

                default:
                    System.out.println("\nPilihan tidak valid. Silahkan pilih kembali.\n");
                    break;
            }
        } while(choice != 3);
    }

    public static void tambahDataShirt(Scanner scanner, List<Shirt> shirtList) 
    {
        System.out.print("Masukkan jumlah data: ");
        int n = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < n; i++) {
            System.out.print("ID Produk: ");
            String produkID = scanner.nextLine();
            System.out.print("Nama: ");
            String nama = scanner.nextLine();
            System.out.print("Merk: ");
            String merk = scanner.nextLine();
            System.out.print("Harga: ");
            String harga = scanner.nextLine();
            System.out.print("Ukuran: ");
            String ukuran = scanner.nextLine();
            System.out.print("Material: ");
            String material = scanner.nextLine();
            System.out.print("Jenis: ");
            String jenis = scanner.nextLine();
            System.out.print("Warna: ");
            String warna = scanner.nextLine();
            System.out.print("Tipe Sleeve: ");
            String tipeSleeve = scanner.nextLine();

            Shirt shirt = new Shirt(produkID, nama, merk, harga, ukuran, material, jenis, warna, tipeSleeve);
            shirtList.add(shirt);
        }

        System.out.println("\nData telah ditambahkan.");
    }

    // fungsi untuk menampilkan data dalam bentuk tabel
    public static void tampilanTabel(List<Shirt> llist) 
    {
            // mencari panjang maksimum untuk setiap kolom
            int panjangMaxProdukID = 0;
            int panjangMaxNama = 0;
            int panjangMaxMerk = 0;
            int panjangMaxHarga = 0;
            int panjangMaxUkuran = 0;
            int panjangMaxMaterial = 0;
            int panjangMaxjenis = 0;
            int panjangMaxWarna = 0;
            int panjangMaxTipeSleeve = 0;

            // mencari panjang maksimum untuk setiap kolom dalam tabel
            for(Shirt shirt : llist) 
            {
                // menghitung panjang ID saat ini
                int currentProdukIDLength = shirt.getProdukID().length();
                if(currentProdukIDLength > panjangMaxProdukID) 
                {
                    panjangMaxProdukID = currentProdukIDLength;
                }

                // menghitung panjang nama saat ini
                int currentNamaLength = shirt.getNama().length();
                if(currentNamaLength > panjangMaxNama) 
                {
                    panjangMaxNama = currentNamaLength;
                }

                // menghitung panjang merk saat ini
                int currentMerkLength = shirt.getMerk().length();
                if(currentMerkLength > panjangMaxMerk) 
                {
                    panjangMaxMerk = currentMerkLength;
                }

                // menghitung panjang harga saat ini
                int currentHargaLength = shirt.getHarga().length();
                if(currentHargaLength > panjangMaxHarga) 
                {
                    panjangMaxHarga = currentHargaLength;
                }

                // menghitung panjang harga saat ini
                int currentUkuranLength = shirt.getUkuran().length();
                if(currentUkuranLength > panjangMaxUkuran) 
                {
                    panjangMaxUkuran = currentUkuranLength;
                }

                // menghitung panjang harga saat ini
                int currentjenisLength = shirt.getJenis().length();
                if(currentjenisLength > panjangMaxjenis) 
                {
                    panjangMaxjenis = currentjenisLength;
                }

                // menghitung panjang harga saat ini
                int currentWarnaLength = shirt.getWarna().length();
                if(currentWarnaLength > panjangMaxWarna) 
                {
                    panjangMaxWarna = currentWarnaLength;
                }

                // menghitung panjang harga saat ini
                int currentTipeSleeveLength = shirt.getTipeSleeve().length();
                if(currentTipeSleeveLength > panjangMaxTipeSleeve) 
                {
                    panjangMaxTipeSleeve = currentTipeSleeveLength;
                }
            }

            // menampilkan tabel dengan lebar kolom yang sesuai
            // menampilkan garis pembatas
            System.out.println("\n+-" + repeatString("-", Math.max(panjangMaxProdukID, "ID Produk".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxNama, "Nama".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxMerk, "Merk".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxHarga, "Harga".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxUkuran, "Ukuran".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxMaterial, "Material".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxjenis, "Jenis".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxWarna, "Warna".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxTipeSleeve, "Tipe Sleeve".length())) + "-+");

             // menampilkan kepala tabel dengan lebar kolom yang sesuai
            System.out.printf("| %-" + Math.max(panjangMaxProdukID, "ID Produk".length()) + "s | %-" + Math.max(panjangMaxNama, "Nama".length()) + "s | %-" + Math.max(panjangMaxMerk, "Merk".length()) + "s | %-" + Math.max(panjangMaxHarga, "Harga".length()) + "s | %-" + Math.max(panjangMaxUkuran, "Ukuran".length()) + "s | %-" + Math.max(panjangMaxMaterial, "Material".length()) + "s | %-" + Math.max(panjangMaxjenis, "Jenis".length()) + "s | %-" + Math.max(panjangMaxWarna, "Warna".length()) + "s | %-" + Math.max(panjangMaxTipeSleeve, "Tipe Sleeve".length()) + "s |", 
                    "ID Produk", "Nama", "Merk", "Harga", "Ukuran", "Material", "Jenis", "Warna", "Tipe Sleeve");

            // menampilkan garis pembatas
            System.out.println("\n+-" + repeatString("-", Math.max(panjangMaxProdukID, "ID Produk".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxNama, "Nama".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxMerk, "Merk".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxHarga, "Harga".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxUkuran, "Ukuran".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxMaterial, "Material".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxjenis, "Jenis".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxWarna, "Warna".length())) + "-+-"
                    + repeatString("-", Math.max(panjangMaxTipeSleeve, "Tipe Sleeve".length())) + "-+");

            // menampilkan data shirt
            for(Shirt shirt : llist) 
            {
                System.out.printf("| %-" + Math.max(panjangMaxProdukID, "ID Produk".length()) + "s | %-" + Math.max(panjangMaxNama, "Nama".length()) + "s | %-" + Math.max(panjangMaxMerk, "Merk".length()) + "s | %-" + Math.max(panjangMaxHarga, "Harga".length()) + "s | %-" + Math.max(panjangMaxUkuran, "Ukuran".length()) + "s | %-" + Math.max(panjangMaxMaterial, "Material".length()) + "s | %-" + Math.max(panjangMaxjenis, "Jenis".length()) + "s | %-" + Math.max(panjangMaxWarna, "Warna".length()) + "s | %-" + Math.max(panjangMaxTipeSleeve, "Tipe Sleeve".length()) + "s |\n",
                        shirt.getProdukID(), shirt.getNama(), shirt.getMerk(), shirt.getHarga(), shirt.getUkuran(), shirt.getMaterial(), shirt.getJenis(), shirt.getWarna(), shirt.getTipeSleeve());
            }

            // menampilkan garis antar baris
                System.out.println("+-" + repeatString("-", Math.max(panjangMaxProdukID, "ID Produk".length())) + "-+-"
                                + repeatString("-", Math.max(panjangMaxNama, "Nama".length())) + "-+-"
                                + repeatString("-", Math.max(panjangMaxMerk, "Merk".length())) + "-+-"
                                + repeatString("-", Math.max(panjangMaxHarga, "Harga".length())) + "-+-"
                                + repeatString("-", Math.max(panjangMaxUkuran, "Ukuran".length())) + "-+-"
                                + repeatString("-", Math.max(panjangMaxMaterial, "Material".length())) + "-+-"
                                + repeatString("-", Math.max(panjangMaxjenis, "Jenis".length())) + "-+-"
                                + repeatString("-", Math.max(panjangMaxWarna, "Warna".length())) + "-+-"
                                + repeatString("-", Math.max(panjangMaxTipeSleeve, "Tipe Sleeve".length())) + "-+\n");
    }

    // fungsi untuk mengulang string sebanyak n kali
    public static String repeatString(String str, int n) 
    {
        StringBuilder sb = new StringBuilder();
        for(int i = 0 ; i < n ; i++) 
        {
            sb.append(str);
        }
        return sb.toString();
    }
}
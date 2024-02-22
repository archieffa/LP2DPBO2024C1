# Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
# Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
# dispesifikasikan. Aamiin. 

from Shirt import Shirt

# fungsi untuk menambah data
def tambahData(shirt_list):
    n = int(input("Masukkan jumlah data: "))
    for i in range(n):
        produkID = input("ID Produk: ")
        nama = input("Nama: ")
        merk = input("Merk: ")
        harga = input("Harga: ")
        ukuran = input("Ukuran: ")
        material = input("Material: ")
        jenis = input("Jenis: ")
        warna = input("Warna: ")
        tipeSleeve = input("Tipe Sleeve: ")

        shirt = Shirt(produkID, nama, merk, harga, ukuran, material, jenis, warna, tipeSleeve)
        shirt_list.append(shirt)
    print("\nData telah ditambahkan.")

# fungsi untuk menampilkan data dalam bentuk tabel
def tampilanTabel(shirt_list):
    if not shirt_list:
        print("\nData kosong.\n")
        return  # mengembalikan nilai dari fungsi jika shirt_list kosong

    # mencari panjang maksimum untuk setiap kolom
    panjangMaxProdukID = max(len(str(clothes.getProdukID())) for clothes in shirt_list)
    panjangMaxNama = max(len(clothes.getNama()) for clothes in shirt_list)
    panjangMaxMerk = max(len(clothes.getMerk()) for clothes in shirt_list)
    panjangMaxHarga = max(len(clothes.getHarga()) for clothes in shirt_list)
    panjangMaxUkuran = max(len(clothes.getUkuran()) for clothes in shirt_list)
    panjangMaxMaterial = max(len(clothes.getMaterial()) for clothes in shirt_list)
    panjangMaxJenis = max(len(clothes.getJenis()) for clothes in shirt_list)
    panjangMaxWarna = max(len(clothes.getWarna()) for clothes in shirt_list)
    panjangMaxTipeSleeve = max(len(clothes.getTipeSleeve()) for clothes in shirt_list)

    # menentukan panjang maksimum untuk setiap kolom dalam kepala tabel
    panjangMaxProdukID_header = max(len("ID Produk"), panjangMaxProdukID)
    panjangMaxNama_header = max(len("Nama"), panjangMaxNama)
    panjangMaxMerk_header = max(len("Merk"), panjangMaxMerk)
    panjangMaxHarga_header = max(len("Harga"), panjangMaxHarga)
    panjangMaxUkuran_header = max(len("Ukuran"), panjangMaxUkuran)
    panjangMaxMaterial_header = max(len("Material"), panjangMaxMaterial)
    panjangMaxJenis_header = max(len("Jenis"), panjangMaxJenis)
    panjangMaxWarna_header = max(len("Warna"), panjangMaxWarna)
    panjangMaxTipeSleeve_header = max(len("TipeSleeve"), panjangMaxTipeSleeve)

    # menampilkan tabel dengan lebar kolom yang sesuai
    # menampilkan garis pembatas dan kepala tabel dengan lebar kolom yang sesuai
    print("\n+-" + "-" * panjangMaxProdukID_header + "-+-" + "-" * panjangMaxNama_header + "-+-" + "-" * panjangMaxMerk_header + "-+-" + "-" * panjangMaxHarga_header + "-+-" + "-" * panjangMaxUkuran_header + "-+-" + "-" * panjangMaxMaterial_header + "-+-" + "-" * panjangMaxJenis_header + "-+-" + "-" * panjangMaxWarna_header + "-+-" + "-" * panjangMaxTipeSleeve_header + "-+")
    print("| {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} |".format("ID Produk", panjangMaxProdukID_header, "Nama", panjangMaxNama_header, "Merk", panjangMaxMerk_header, "Harga", panjangMaxHarga_header, "Ukuran", panjangMaxUkuran_header, "Material", panjangMaxMaterial_header, "Jenis", panjangMaxJenis_header, "Warna", panjangMaxWarna_header, "TipeSleeve", panjangMaxTipeSleeve_header))
    print("+-" + "-" * panjangMaxProdukID_header + "-+-" + "-" * panjangMaxNama_header + "-+-" + "-" * panjangMaxMerk_header + "-+-" + "-" * panjangMaxHarga_header + "-+-" + "-" * panjangMaxUkuran_header + "-+-" + "-" * panjangMaxMaterial_header + "-+-" + "-" * panjangMaxJenis_header + "-+-" + "-" * panjangMaxWarna_header + "-+-" + "-" * panjangMaxTipeSleeve_header + "-+")

    # menampilkan data clothes
    for clothes in shirt_list:
        print("| {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} | {:<{}} |".format(clothes.getProdukID(), panjangMaxProdukID_header, clothes.getNama(), panjangMaxNama_header, clothes.getMerk(), panjangMaxMerk_header, clothes.getHarga(), panjangMaxHarga_header, clothes.getUkuran(), panjangMaxUkuran_header, clothes.getMaterial(), panjangMaxMaterial_header, clothes.getJenis(), panjangMaxJenis_header, clothes.getWarna(), panjangMaxWarna_header, clothes.getTipeSleeve(), panjangMaxTipeSleeve_header))

    # menampilkan garis pembatas
    print("+-" + "-" * panjangMaxProdukID_header + "-+-" + "-" * panjangMaxNama_header + "-+-" + "-" * panjangMaxMerk_header + "-+-" + "-" * panjangMaxHarga_header + "-+-" + "-" * panjangMaxUkuran_header + "-+-" + "-" * panjangMaxMaterial_header + "-+-" + "-" * panjangMaxJenis_header + "-+-" + "-" * panjangMaxWarna_header + "-+-" + "-" * panjangMaxTipeSleeve_header + "-+")
    print()

def main():
    shirt_list = []  # inisialisasi list kosong untuk menyimpan data Clothing Brand

    print("\nSelamat datang di program manajemen Clothing Brand!\n")

    while True:
        # menampilkan pilihan fitur
        print("Silahkan pilih salah satu fitur dari opsi berikut:")
        print("1. Tambah Data")
        print("2. Tampilkan Data")
        print("3. Selesai")
        choice = int(input("Fitur yang dipilih: "))  # memilih fitur

        if choice == 1:
            tambahData(shirt_list)  #  menambah data
            tampilanTabel(shirt_list)  # menamppilkan data dengan tabel

        elif choice == 2:
            tampilanTabel(shirt_list)  # menamppilkan data dengan tabel

        elif choice == 3:  # keluar dari program
            print("\nTerima kasih telah menggunakan fitur-fitur dari program manajemen Clothing Brand!\n")
            break

        else:
            print("\nPilihan tidak valid. Silahkan pilih kembali.\n")

if __name__ == "__main__":
    main()  # panggil fungsi main() saat program dijalankan
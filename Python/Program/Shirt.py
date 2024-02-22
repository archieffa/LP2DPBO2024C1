# Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
# Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
# dispesifikasikan. Aamiin. 

from Clothing import Clothing 

# mendefinisikan kelas Shirt yang mewarisi dari kelas Clothing
class Shirt(Clothing):
    
    def __init__(self, produkID, nama, merk, harga, ukuran, material, jenis, warna, tipeSleeve):
        super().__init__(produkID, nama, merk, harga, ukuran, material, jenis)  # memanggil konstruktor kelas Product dan Clothing
        self.warna = warna
        self.tipeSleeve = tipeSleeve

    # fungsi-fungsi untuk mendapat dan mengatur atribut-atribut pada kelas Shirt
    def getWarna(self):
        return self.warna

    def setWarna(self, warna):
        self.warna = warna

    def getTipeSleeve(self): 
        return self.tipeSleeve

    def setTipeSleeve(self, tipeSleeve):
        self.tipeSleeve = tipeSleeve

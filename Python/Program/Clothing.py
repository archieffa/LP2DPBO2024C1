# Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
# Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
# dispesifikasikan. Aamiin. 

from Product import Product 

# mendefinisikan kelas Clothing yang mewarisi dari kelas Product
class Clothing(Product):
    def __init__(self, produkID, nama, merk, harga, ukuran, material, jenis):
        super().__init__(produkID, nama, merk, harga)  # memanggil konstruktor kelas Product
        self.ukuran = ukuran
        self.material = material 
        self.jenis = jenis

    # fungsi-fungsi untuk mendapat dan mengatur atribut-atribut pada kelas Clothing
    def getUkuran(self):
        return self.ukuran

    def setUkuran(self, ukuran):
        self.ukuran = ukuran

    def getMaterial(self):
        return self.material

    def setMaterial(self, material):
        self.material = material

    def getJenis(self):
        return self.jenis

    def setJenis(self, jenis):
        self.jenis = jenis
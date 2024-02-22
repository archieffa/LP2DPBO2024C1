# Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
# Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
# dispesifikasikan. Aamiin. 

# mendefinisikan kelas Product
class Product:
    def __init__(self, produkID, nama, merk, harga):
        self.produkID = produkID
        self.nama = nama
        self.merk = merk 
        self.harga = harga

    # fungsi-fungsi untuk mendapat dan mengatur atribut-atribut pada kelas Product
    def getProdukID(self):
        return self.produkID

    def setProdukID(self, produkID):
        self.produkID = produkID

    def getNama(self): 
        return self.nama

    def setNama(self, nama):
        self.nama = nama

    def getMerk(self):
        return self.merk

    def setMerk(self, merk):
        self.merk = merk

    def getHarga(self):
        return self.harga

    def setHarga(self, harga):
        self.harga = harga
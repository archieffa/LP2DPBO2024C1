# JANJI

Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# DESKRIPSI TUGAS

Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java,
Python, dan PHP yang mengimplementasikan konsep Multi-level Inheritance
pada kelas - kelas tersebut:
- Product: idProduct, name, brand, price
- Clothing: size, material, gender
- Shirt: color, sleeve_type

# DESAIN KELAS (DIAGRAM)

![clothingBrand](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/bafa1d06-62e4-48f8-b437-7081a37a07f3)

# DESAIN KODE PROGRAM

Program ini menggunakan tiga kelas yaitu:

1. Class Product (Super/Base Class)
    
    Kelas ini menjadi Parent Class karena memiliki struktur dasar untuk merepresentasi berbagai jenis produk. Kelas ini memiliki empat atribut, yaitu:
    
    - produkID: menyimpan ID Produk dalam bentuk string
    - nama: menyimpan nama dalam bentuk string
    - merk: menyimpan merk dalam bentuk string
    - harga: menyimpan harga dalam bentuk string
      
2. Class Clothing (Derived Class 1)
    
    Kelas ini menjadi Child Class dari kelas Product karena kelas ini memiliki atribut tambahan yang spesifik untuk merepresentasikan produk. Kelas ini memiliki tiga atribut, yaitu:
    
    - ukuran: menyimpan ukuran dalam bentuk string
    - material: menyimpan material dalam bentuk string
    - jenis: menyimpan jenis dalam bentuk string
      
3. Class Shirt (Derived Class 2)
    
    Kelas ini menjadi Child Class dari kelas Clothing atau menjadi Grandchild untuk Class Product karena kelas ini memiliki atribut tambahan untuk merepresentasikan jenis produk tertentu secara lebih spesifik. Kelas ini memiliki dua atribut, yaitu:
    
    - warna: menyimpan warna dalam bentuk string
    - tipeSleeve: menyimpan tipeSleeve dalam bentuk string

Ketiga kelas diatas memiliki setter dan getter untuk setiap atributnya, sehingga program dapat menambah data secara dinamis, kecuali untuk program PHP. Penyimpanan data clothing brand menggunakan struktur data tabel.

# ALUR PROGRAM

Semua program mempunyai alur yang sama, kecuali program PHP yang inputan datanya berupa hardcode. Alur programnya adalah sebagai berikut:

- User mulai menjalankan program
- User diberikan opsi untuk memilih fitur:
    - Tambah Data
    - Tampilkan Data
    - Selesai
- User memilih satu fitur
- Program melakukan operasi sesuai fitur yang dipilih user.
- Program terus berjalan selama user masih memilih diantara 2 fitur, sedangkan program akan berhenti ketika user memilih satu fitur yaitu fitur “Selesai”.

# DOKUMENTASI

## CPP

![tambahData](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/cebc8b3a-8881-4b64-a015-d160de818ba1)
![tampilkanData](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/65f3daf3-e96b-4ab9-840a-36a01f7922e7)
![selesai](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/b8301511-a86a-4067-bf2a-8e7960bc8728)

## Java

![tambahData](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/5f2dc1c7-ac79-49e8-9c11-d24f77a00a51)
![tampilkanData](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/84c4a24e-7d57-48b4-b8b5-b30e7202d531)
![selesai](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/c7df3f6a-4b34-4dfb-8a0f-30bb52aa0d60)

## Python

![tambahData](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/e2a47d93-aafe-46a5-a8f7-6326fc890f14)
![tampilkanData](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/f2219600-c25b-4fe5-9990-5abb904ea4f7)
![selesai](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/5d33ef47-78a2-4884-afa8-58cf6894711e)

## PHP
![tambahData](https://github.com/archieffa/LP2DPBO2024C1/assets/121290445/421adabe-bf4d-4024-85cc-192b577488be)

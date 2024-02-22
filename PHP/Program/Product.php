<?php

/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

// mendefinisikan kelas Product
class Product 
{
    private $produkID; 
    private $nama;
    private $merk;
    private $harga; 

    public function __construct($produkID, $nama, $merk, $harga) 
    {
        $this->produkID = $produkID;
        $this->nama = $nama;
        $this->merk = $merk;
        $this->harga = $harga;
    }

    // fungsi-fungsi untuk mendapatkan dan mengatur atribut-atribut dari kelas Product
    public function getProdukID() 
    {
        return $this->produkID;
    }

    public function setProdukID($produkID) 
    {
        $this->produkID = $produkID;
    }

    public function getNama() 
    {
        return $this->nama;
    }

    public function setNama($nama) 
    {
        $this->nama = $nama;
    }

    public function getMerk() 
    {
        return $this->merk;
    }

    public function setMerk($merk) 
    {
        $this->merk = $merk;
    }

    public function getHarga() 
    {
        return $this->harga;
    }

    public function setHarga($harga) 
    {
        $this->harga = $harga;
    }
}
?>
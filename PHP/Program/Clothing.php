<?php

/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

require_once 'Product.php';

// mendefinisikan kelas Clothing yang merupakan turunan dari kelas Product
class Clothing extends Product 
{ 
    private $ukuran;
    private $material;
    private $jenis;
 
    // memanggil konstruktor dari kelas induk Product dengan meneruskan parameter yang diperlukan
    public function __construct($produkID, $nama, $merk, $harga, $ukuran, $material, $jenis) 
    {
        parent::__construct($produkID, $nama, $merk, $harga);
        $this->ukuran = $ukuran;
        $this->material = $material;
        $this->jenis = $jenis;
    }

    // fungsi-fungsi untuk mendapatkan dan mengatur atribut-atribut dari kelas Clothing
    public function getUkuran() 
    {
        return $this->ukuran;
    }

    public function setUkuran($ukuran) 
    {
        $this->ukuran = $ukuran;
    }

    public function getMaterial() 
    {
        return $this->material;
    }

    public function setMaterial($material) 
    {
        $this->material = $material;
    }

    public function getJenis() 
    {
        return $this->jenis;
    }

    public function setJenis($jenis) 
    {
        $this->jenis = $jenis;
    }
}
?>
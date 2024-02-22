<?php

/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

require_once 'Clothing.php';

// mendefinisikan kelas Shirt yang merupakan turunan dari kelas Clothing
class Shirt extends Clothing 
{
    private $warna; 
    private $tipeSleeve;

    // memanggil konstruktor dari kelas induk Clothing dengan meneruskan parameter yang diperlukan
    public function __construct($produkID, $nama, $merk, $harga, $ukuran, $material, $jenis, $warna, $tipeSleeve) 
    {
        parent::__construct($produkID, $nama, $merk, $harga, $ukuran, $material, $jenis);
        $this->warna = $warna;
        $this->tipeSleeve = $tipeSleeve;
    }

    // fungsi-fungsi untuk mendapatkan dan mengatur atribut-atribut dari kelas Shirt
    public function getWarna() 
    {
        return $this->warna;
    }

    public function setWarna($warna) 
    {
        $this->warna = $warna;
    }

    public function getTipeSleeve() 
    {
        return $this->tipeSleeve;
    }

    public function setTipeSleeve($tipeSleeve) 
    {
        $this->tipeSleeve = $tipeSleeve;
    }
}
?>
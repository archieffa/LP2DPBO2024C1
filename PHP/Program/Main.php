<?php

/* Saya Syifa Azzahra NIM 2207308 mengerjakan soal Latihan 2 dalam mata kuliah 
Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin. */

require_once 'Shirt.php';

// membuat list dan diisi data
$list_clothes = array(
    new Shirt('P001', 'Kaos Polos', 'XYZ Clothing', 'Rp50.000', 'M', 'Katun', 'Kaos Oblong', 'Putih', 'Pendek'),
    new Shirt('P002', 'Celana Jeans', 'ABC Denim', 'Rp200.000', '32', 'Denim', 'Celana Panjang', 'Biru Muda', 'Tanpa Lengan')
);

echo "<h3>Data Manajemen Clothing Brand</h3>";
 
// mencari panjang maksimum untuk setiap kolom
$max_lengths = array(0, 0, 0, 0, 0, 0, 0, 0, 0);

foreach ($list_clothes as $clothes) 
{
    $max_lengths[0] = max($max_lengths[0], strlen($clothes->getProdukID()));
    $max_lengths[1] = max($max_lengths[1], strlen($clothes->getNama()));
    $max_lengths[2] = max($max_lengths[2], strlen($clothes->getMerk()));
    $max_lengths[3] = max($max_lengths[3], strlen($clothes->getHarga()));
    $max_lengths[4] = max($max_lengths[4], strlen($clothes->getUkuran()));
    $max_lengths[5] = max($max_lengths[5], strlen($clothes->getMaterial()));
    $max_lengths[6] = max($max_lengths[6], strlen($clothes->getJenis()));
    $max_lengths[7] = max($max_lengths[7], strlen($clothes->getWarna()));
    $max_lengths[8] = max($max_lengths[8], strlen($clothes->getTipeSleeve()));
}

// membuat tabel dengan lebar kolom yang sesuai
echo "<table border='1'>";
echo "<tr>";
echo "<th style='min-width: ".$max_lengths[0]."ch'>ID Produk</th>";
echo "<th style='min-width: ".$max_lengths[1]."ch'>Nama</th>";
echo "<th style='min-width: ".$max_lengths[2]."ch'>Merk</th>";
echo "<th style='min-width: ".$max_lengths[3]."ch'>Harga</th>";
echo "<th style='min-width: ".$max_lengths[4]."ch'>Ukuran</th>";
echo "<th style='min-width: ".$max_lengths[5]."ch'>Material</th>";
echo "<th style='min-width: ".$max_lengths[6]."ch'>Jenis</th>";
echo "<th style='min-width: ".$max_lengths[7]."ch'>Warna</th>";
echo "<th style='min-width: ".$max_lengths[8]."ch'>TipeSleeve</th>";
echo "</tr>";

foreach($list_clothes as $clothes) 
{
    echo "<tr>";
    echo "<td>".$clothes->getProdukID()."</td>";
    echo "<td>".$clothes->getNama()."</td>";
    echo "<td>".$clothes->getMerk()."</td>";
    echo "<td>".$clothes->getHarga()."</td>";
    echo "<td>".$clothes->getUkuran()."</td>";
    echo "<td>".$clothes->getMaterial()."</td>";
    echo "<td>".$clothes->getJenis()."</td>";
    echo "<td>".$clothes->getWarna()."</td>";
    echo "<td>".$clothes->getTipeSleeve()."</td>";
    echo "</tr>";
}

echo "</table>";
?>
<!-- Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. -->
<?php
// require atau import file 
require ('Mahasiswa.php');

// deklarasi array
$arrData = array();

// instantation object data1
$data1 = new Mahasiswa();
$data1->setNik('003298765');
$data1->setName('Amida Zulfa');
$data1->setGender('Perempuan');
$data1->setAsal_univ('UPI');
$data1->setEmail_edu('amida.zulfa@upi.edu');
$data1->setNim(2101147);
$data1->setProdi('Ilmu Komputer');
$data1->setFakultas('FPMIPA');
$data1->setFoto('assets\1.jpg');
//push data ke dalam array
array_push($arrData,$data1);

// instantation object data2
$data2 = new Mahasiswa();
$data2->setNik('003227648');
$data2->setName('April Meijuni');
$data2->setGender('Perempuan');
$data2->setAsal_univ('UNPAD');
$data2->setEmail_edu('april@unpad.edu');
$data2->setNim(2209387);
$data2->setProdi('Ilmu Gizi');
$data2->setFakultas('Gizi');
$data2->setFoto('assets\4.jpg');
//push data ke dalam array
array_push($arrData,$data2);

// instantation object data3
$data3 = new Mahasiswa();
$data3->setNik('003264754');
$data3->setName('Kia Cantik');
$data3->setGender('Perempuan');
$data3->setAsal_univ('Universitas Indonesia');
$data3->setEmail_edu('KiaWaw@UI.edu');
$data3->setNim(2103345);
$data3->setProdi('Ilmu Komunikasi');
$data3->setFakultas('FASILKOM');
$data3->setFoto('assets\5.jpg');
//push data ke dalam array
array_push($arrData,$data3);

// output berbentuk tabel
$nomor=1;
        echo "<center><font size='6'><b>DAFTAR MAHASISWA</b></center>";
        echo "<center><table border='1' width='75%' height='75%'>";
        echo "<tr align='center'>
            <th> No </th>
            <th> NIK </th>
            <th> Nama </th>
            <th> Jenis Kelamin </th>
            <th> Asal Universitas </th>
            <th> Alamat Email </th>
            <th> NIM </th>
            <th> Program Studi </th>
            <th> Fakultas </th>
            <th> Foto </th>
            </tr>";
        for($x = 0; $x < sizeof($arrData); $x++){
            echo "<tr  align='center'>";
            echo '<td>'.$nomor.'</td><td>';
            echo $arrData[$x]->getNik();
            echo "</td><td>";
            echo $arrData[$x]->getName();
            echo "</td><td>";
            echo $arrData[$x]->getGender();
            echo "</td><td>";
            echo $arrData[$x]->getAsal_univ();
            echo "</td><td>";
            echo $arrData[$x]->getEmail_edu();
            echo "</td><td>";
            echo $arrData[$x]->getNim();
            echo "</td><td>";
            echo $arrData[$x]->getProdi();
            echo "</td><td>";
            echo $arrData[$x]->getFakultas();
            echo "</td><td>";
            echo "<img src='" . $arrData[$x]->getFoto(). "'style='width: 125px'>";
            echo "</td>";
            echo "</tr>";
            $nomor++;
        }
            echo "</table> </center>";
echo '<br>';
?>
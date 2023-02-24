<!-- Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. -->
<?php
require ('SivitasAkademik.php');

// Class declaration, class ini sebagai anak dari Sivitas Akademik dan cucu dari Human
class Mahasiswa extends SivitasAkademik {
    // atribut private
    private $nim = '';
    private $prodi = '';
    private $fakultas = '';
    private $foto = '';

    //constructor
    public function __construct( $nim = '', $prodi='', $fakultas='', $foto='' ) {
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
        $this->foto = $foto;
    }

    // Getter dan Setter
    //set nim
 
    public function setNim($nim){
        $this->nim = $nim;
    }
    //get nim

    public function getNim(){
        return $this->nim;
    }   
    //set prodi
    public function setProdi($prodi){
        $this->prodi = $prodi;
    }
    //get prodi
    public function getProdi(){
        return $this->prodi;
    } 
    //set fakultas
    public function getfakultas(){
        return $this->fakultas;
    }  
    //get fakultas
    public function setFakultas($fakultas){
        $this->fakultas = $fakultas;
    }
    //set foto
    public function getFoto(){
        return $this->foto;
    }
    //get foto
    public function setFoto($foto){
        $this->foto = $foto;
    }
}

?>
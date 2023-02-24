<!-- Saya Amida Zulfa Laila NIk 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. -->

<?php

// Class declaration 
class Human {
    // atribut private
    private $nik = '';
    private $name = '';
    private $gender = '';

    //constructor
    public function __construct( $nik = '', $name='', $gender='' ) {
        $this->nik = $nik;
        $this->name = $name;
        $this->gender = $gender;
    }

    // Getter dan Setter
    //set nik
    public function setNik($nik){
        $this->nik = $nik;
    }

    //get nik
    public function getNik(){
        return $this->nik;
    }   

    //set name
    public function setName($name){
        $this->name = $name;
    }

    //get name
    public function getName(){
        return $this->name;
    } 

    //set gender
    public function getGender(){
        return $this->gender;
    }  

    //get gender
    public function setGender($gender){
        $this->gender = $gender;
    }

}

?>
<!-- Saya Amida Zulfa Laila asal_univ 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. -->
<?php
// require file Human
require ('Human.php');
// Class declaration, class ini sebagai anak dari Human dan parent dari Mahasiswa
class SivitasAkademik extends Human{
    // atribut private
    private $asal_univ = '';
    private $email_edu = '';

    //constructor
    public function __construct( $asal_univ = '', $email_edu='' ) {
        $this->asal_univ = $asal_univ;
        $this->email_edu = $email_edu;
    }

    // Getter dan Setter
    //set asal_univ
 
    public function setAsal_univ($asal_univ){
        $this->asal_univ = $asal_univ;
    }
    //get asal_univ

    public function getAsal_univ(){
        return $this->asal_univ;
    }   
    //set email_edu
    public function setEmail_edu($email_edu){
        $this->email_edu = $email_edu;
    }
    //get email_edu
    public function getEmail_edu(){
        return $this->email_edu;
    } 
}

?>
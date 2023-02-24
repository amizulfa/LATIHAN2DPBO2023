/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// import library
#include <iostream>
#include <string>
#include "Human.cpp"

// using standard namespace
using namespace std;

// deklarasi Class Sivitas Akademik, sebagai anak dari Class Human dan Parent dari Class Mahasiswa
class SivitasAkademik : public Human
{
    // Private attributes
private:
    string asal_universitas;
    string email_edu;

public:
    /* contructor */
    SivitasAkademik()
    {
        this->asal_universitas = "";
        this->email_edu = "";
    }

    // Constructor dengan parameter
    SivitasAkademik(string asal_universitas, string email_edu)
    {
        this->asal_universitas = asal_universitas;
        this->email_edu = email_edu;
    }

    /* Getter dan Setter*/

    // get asal_universitas
    string getAsal_univ()
    {
        return this->asal_universitas;
    }

    // set asal_universitas
    void setAsal_univ(string asal_universitas)
    {
        this->asal_universitas = asal_universitas;
    }

    // get email_edu
    string getEmail_edu()
    {
        return this->email_edu;
    }

    // set email_edu
    void setEmail_edu(string email_edu)
    {
        this->email_edu = email_edu;
    }

    /* Destructor */
    ~SivitasAkademik()
    {
    }
};
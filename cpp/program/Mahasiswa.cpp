/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// import library
#include <iostream>
#include <string>
#include "SivitasAkademik.cpp"

// using standard namespace
using namespace std;

// deklarasi class Mahasiswa, clas ini sebagai cucu dari class Human atau anak dari class Sivitas Akademik
class Mahasiswa : public SivitasAkademik
{
private:
    // Private attributes
    int nim;
    string prodi;
    string fakultas;

public:
    /* contructor */
    Mahasiswa()
    {
        this->nim = 0;
        this->prodi = "";
        this->fakultas = "";
    }

    // Constructor dengan parameter
    Mahasiswa(int nim, string prodi, string fakultas)
    {
        this->nim = nim;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }

    /* Getter dan Setter*/

    // get nim
    int getNim()
    {
        return this->nim;
    }

    // set nim
    void setNim(int nim)
    {
        this->nim = nim;
    }

    // Get Prodi
    string getProdi()
    {
        return this->prodi;
    }

    // Set Prodi
    void setProdi(string prodi)
    {
        this->prodi = prodi;
    }

    // Get Fakultas
    string getFakultas()
    {
        return this->fakultas;
    }

    // Set Fakultas
    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    /* Destructor */
    ~Mahasiswa()
    {
    }
};

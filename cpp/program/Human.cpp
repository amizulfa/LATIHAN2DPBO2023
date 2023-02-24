/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// import library
#include <iostream>
#include <string>

// using standard namespace
using namespace std;

// deklarasi Class Human, class ini sebagai parent atau orangtua
class Human
{
    // Private attributes
private:
    int nik;
    string name;
    string gender;

public:
    /* contructor */
    Human()
    {
        this->nik = 0;
        this->name = "";
        this->gender = '-';
    }

    // constructor with parameter
    Human(int nik, string name, string gender)
    {
        this->nik = nik;
        this->name = name;
        this->gender = gender;
    }

    /* Getter dan Setter*/

    // Get NIK
    int getNik()
    {
        return this->nik;
    }

    // set NIK
    void setNik(int nik)
    {
        this->nik = nik;
    }

    // get name
    string getName()
    {
        return this->name;
    }

    // set name
    void setName(string name)
    {
        this->name = name;
    }

    // get gender
    string getGender()
    {
        return this->gender;
    }

    // set gender
    void setGender(string gender)
    {
        this->gender = gender;
    }

    /* Destructor */
    ~Human()
    {
    }
};

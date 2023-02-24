/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// Import library and file
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

// using standard namespace
using namespace std;

int main()
{
    // deklarasi list
    list<Mahasiswa> llist;

    int n = 0;
    int nik, nim;
    string name, gender, prodi, fakultas, asal_univ, email_edu;

    // inputan user berapa banyak mahasiswa yang akan dibuat
    cout << "Masukan berapa banyak data : ";
    cin >> n;
    cout << '\n';

    for (int i = 0; i < n; i++)
    {

        // instantiation object
        Mahasiswa mhs;

        // inputan user semua atribut
        cout << "Masukan NIK : ";
        cin >> nik;
        cout << "Masukan Nama : ";
        cin >> name;
        cout << "Masukan Jenis Kelamin : ";
        cin >> gender;
        cout << "Masukan Asal Universitas : ";
        cin >> asal_univ;
        cout << "Masukan Alamat Email : ";
        cin >> email_edu;
        cout << "Masukan NIM : ";
        cin >> nim;
        cout << "Masukan Program Studi : ";
        cin >> prodi;
        cout << "Masukan Fakultas : ";
        cin >> fakultas;
        cout << '\n';

        // set semua atribut
        mhs.setNik(nik);
        mhs.setName(name);
        mhs.setGender(gender);
        mhs.setAsal_univ(asal_univ);
        mhs.setEmail_edu(email_edu);
        mhs.setNim(nim);
        mhs.setProdi(prodi);
        mhs.setFakultas(fakultas);
        // lalu push ke dalam list mhs
        llist.push_back(mhs);
    }

    // iterasi untuk nomor
    /* OUTPUT */
    int i = 0;
    cout << "-------------------------------------------------------" << '\n';
    cout << "                    Daftar Mahasiswa                   " << '\n';
    for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << "-------------------------------------------------------" << '\n';
        cout << (i + 1) << ". ";
        cout << "NIK                 : " << it->getNik() << '\n';
        cout << "   Nama                : " << it->getName() << '\n';
        cout << "   Jenis Kelamin       : " << it->getGender() << '\n';
        cout << "   Asal Universitas    : " << it->getAsal_univ() << '\n';
        cout << "   Email               : " << it->getEmail_edu() << '\n';
        cout << "   NIM                 : " << it->getNim() << '\n';
        cout << "   Program Studi       : " << it->getProdi() << '\n';
        cout << "   Fakultas            : " << it->getFakultas() << '\n';
        i++;
        cout << "-------------------------------------------------------" << '\n';
    }
    return 0;
}
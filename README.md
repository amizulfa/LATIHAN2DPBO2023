# LATIHAN2DPBO2023
Latihan Praktikum 2 DPBO 2023

>/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

### Soal
> Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang mengimplementasikan konsep Multi-level Inheritance  pada kelas - kelas tersebut :
> - Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
> - Human: NIK, nama, jenis_kelamin
> - SivitasAkademik: asal_universitas, email_edu

### Penjelasan Class
Pada program yang saya buat, terdapat 3 class dan 1 main, yaitu :
1. Class Human untuk membuat suatu objek Human dan memiliki beberapa atribut yaitu NIK, nama, dan jenis kelamin. Class Human yaitu sebagai parent atau orang tua dari Sivitas akademik dan Mahasiswa.
2. Class Sivitas akademik untuk membuat objek Sivitas akademik dan memiliki beberapa atribut yaitu asal universitas, dan email_edu. Class Sivitas akademik sebagai child dari Human dan parent dari Mahasiswa.
3. Class Mahasiswa untuk membuat objek Mahasiswa dan memiliki beberapa atribut yaitu NIM, prodi, dan fakultas. Class Mahasiswa sebagai cucu dari Human dan sebagai anak dari Sivitas akademik.
 4. Kelas turunan (Sivitas akademik dan Mahasiswa) akan mewarisi data field (properti atau atribut) yang dimiliki dari parent(Human). Class Parent(Human) memiliki sifat lebih general, sedangkan kelas turunan akan lebih spesifik.
    

### Output
![image](https://user-images.githubusercontent.com/100895165/220076481-5389b0a6-5ab0-400b-a311-353b6a7f1c89.png)


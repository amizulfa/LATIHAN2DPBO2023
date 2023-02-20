/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// Mahasiswa sebagai cucu dari class Human dan anak dari class Sivitas akademik
public class Mahasiswa extends SivitasAkademik
{
    // Private attributes
    private int nim;
    private String prodi;
    private String fakultas;

     /* contructor */
    public Mahasiswa()
    {
        this.nim = 0;
        this.prodi = "";
        this.fakultas = "";
    }

    // Constructor dengan parameter
    public Mahasiswa( int nim, String prodi, String fakultas)
    {
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    /* Getter dan Setter*/

    // get nim
    public int getNim()
    {
        return this.nim;
    }

    // set nim
    public void setNim(int nim)
    {
        this.nim = nim;
    }

    // Get Prodi
    public String getProdi()
    {
        return this.prodi;
    }

    // Set Prodi
    public void setProdi(String prodi)
    {
        this.prodi = prodi;
    }

    // Get Fakultas
    public String getFakultas()
    {
        return this.fakultas;
    }

    // Set Fakultas
    public void setFakultas(String fakultas)
    {
        this.fakultas = fakultas;
    }
}

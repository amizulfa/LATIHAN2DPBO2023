/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// Sivitas akademik sebagai child atau anak dari class Human
class SivitasAkademik extends Human{
    // Private attributes
    private String asal_universitas;
    private String email_edu;

     /* contructor */
    public SivitasAkademik()
    {
        this.asal_universitas = "";
        this.email_edu = "";
    }

    // Constructor dengan parameter
    public SivitasAkademik(String asal_universitas, String email_edu)
    {
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    /* Getter dan Setter*/

    // get asal_universitas
    public String getAsal_univ()
    {
        return this.asal_universitas;
    }

    // set asal_universitas
    public void setAsal_univ(String asal_universitas)
    {
        this.asal_universitas = asal_universitas;
    }
    
    // get email_edu
    public String getEmail_edu()
    {
        return this.email_edu;
    }

    // set email_edu
    public void setEmail_edu(String email_edu)
    {
        this.email_edu = email_edu;
    }

}
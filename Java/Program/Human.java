/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// Human sebagai parent atau orangtua
class Human {
    // Private attributes
    private int nik;
    private String name;
    private String gender;

     /* contructor */
    // contructor. Take note that it doesnt have any return type
    public Human()
    {
        this.nik = 0;
        this.name = "";
        this.gender = "";
    }

    // Another constructor with parameter.
    public Human(int nik, String name, String gender)
    {
        this.nik = nik;
        this.name = name;
        this.gender = gender;
    }

    /* Getter dan Setter*/

    // Get name
    public int getNik()
    {
        return this.nik;
    }

    //set name
    public void setNik(int nik)
    {
        this.nik = nik;
    }
    
    public String getName()
    {
        return this.name;
    }

    //set name
    public void setName(String name)
    {
        this.name = name;
    }


    //get gender
    public String getGender()
    {
        return this.gender;
    }

    //set gender
    public void setGender(String gender)
    {
        this.gender = gender;
    }

}





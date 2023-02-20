/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */
import java.util.ArrayList;

public class Main{
    public static void main(String[] args) {
        //deklarasi list Mahasiswa
        ArrayList<Mahasiswa> mhsData= new ArrayList<>();
        
        //instantiation object
        Mahasiswa mhs = new Mahasiswa();
        //set semua attribut secara hardcode
        mhs.setNik(123456789);
        mhs.setName("Amida Zulfa");
        mhs.setGender("Perempuan");
        mhs.setAsal_univ("UPI");
        mhs.setEmail_edu("amida.zulfa@upi.edu");
        mhs.setNim(2101147);
        mhs.setProdi("Ilmu Komputer");
        mhs.setFakultas("FPMIPA");
        // add data ke dalam array
        mhsData.add(mhs);
        
        //instantiation object
        Mahasiswa mhs2 = new Mahasiswa();
        //set semua attribut secara hardcode
        mhs2.setNik(897637582);
        mhs2.setName("Park Chanyeol");
        mhs2.setGender("Laki - laki");
        mhs2.setAsal_univ("ITB");
        mhs2.setEmail_edu("park.ceye@itb.edu");
        mhs2.setNim(2101345);
        mhs2.setProdi("Teknik Informatika");
        mhs2.setFakultas("Teknik");
        // add data ke dalam array
        mhsData.add(mhs2);
        
        //instantiation object
        Mahasiswa mhs3 = new Mahasiswa();
        //set semua attribut secara hardcode
        mhs3.setNik(657487654);
        mhs3.setName("Devano Danendra");
        mhs3.setGender("Laki - laki");
        mhs3.setAsal_univ("Binus");
        mhs3.setEmail_edu("dev.danendra@binus.edu");
        mhs3.setNim(2209876);
        mhs3.setProdi("Seni Musik");
        mhs3.setFakultas("FPSD");
        // add data ke dalam array
        mhsData.add(mhs3);
        
        // iterasi untuk nomor
        int j=0;
        System.out.println("-------------------------------------------------------");
        System.out.println("                    Daftar Mahasiswa                   ");
        for (int i = 0; i < mhsData.size(); i++) {
            // output
            System.out.println("-------------------------------------------------------");
            System.out.print(Integer.toString(j+1) + ". ");
            System.out.println("NIK                 : " + mhsData.get(i).getNik());
            System.out.println("   Nama                : " + mhsData.get(i).getName());
            System.out.println("   Jenis Kelamin       : " + mhsData.get(i).getGender());
            System.out.println("   Asal Universitas    : " + mhsData.get(i).getAsal_univ());
            System.out.println("   Email               : " + mhsData.get(i).getEmail_edu());
            System.out.println("   NIM                 : " + mhsData.get(i).getNim());
            System.out.println("   Program Studi       : " + mhsData.get(i).getProdi());
            System.out.println("   Fakultas            : " + mhsData.get(i).getFakultas());
            j++;
            System.out.println("-------------------------------------------------------");
            System.out.printf("%n");
        }
    }
}
# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

from Mahasiswa import Mahasiswa

# deklarasi list of objek
mahasiswa=[]

# instantiation objek mhs1
mhs = Mahasiswa()
mhs.setNik(123456789)
mhs.setName("Amida Zulfa")
mhs.setGender("Perempuan")
mhs.setNim(2101147)
mhs.setProdi("Ilmu Komputer")
mhs.setFakultas("FPMIPA")
mhs.setAsal_univ("UPI")
mhs.setEmail_edu("amida.zulfa@upi.edu")
# masukan ke dalam list
mahasiswa.append(mhs)

# instantiation objek mhs2
mhs2 = Mahasiswa()
mhs2.setNik(897637582);
mhs2.setNim(2101345);
mhs2.setName("Park Chanyeol");
mhs2.setGender("Laki - laki");
mhs2.setProdi("Teknik Informatika");
mhs2.setFakultas("Teknik");
mhs2.setAsal_univ("ITB");
mhs2.setEmail_edu("park.ceye@upi.edu");
mahasiswa.append(mhs2)

# instantiation objek mhs3
mhs3 = Mahasiswa()
mhs3.setNik(674563789);
mhs3.setNim(2298345);
mhs3.setName("Neng Ayu bin Jongsuk");
mhs3.setGender("Perempuan");
mhs3.setProdi("Teknik Akting");
mhs3.setFakultas("Teknik");
mhs3.setAsal_univ("UNPAD");
mhs3.setEmail_edu("dwldarma@unpad.edu");
mahasiswa.append(mhs3)

# output
i = 0
print("-------------------------------------------------------")
print("                    Daftar Mahasiswa                   ")
for mhss in mahasiswa:
    print("-------------------------------------------------------")
    print(str(i+1)+". ")
    print("   NIK                   :", mhss.getNik())
    print("   Nama                  :", mhss.getName())
    print("   Jenis Kelamin         :", mhss.getGender())
    print("   NIM                   :", mhss.getNim())
    print("   Program Studi         :", mhss.getProdi())
    print("   Fakultas              :", mhss.getFakultas())
    print("   Asal Universitas      :", mhss.getAsal_univ())
    print("   Email                 :", mhss.getEmail_edu())
    i += 1
    print("-------------------------------------------------------")

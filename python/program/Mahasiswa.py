# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

from SivitasAkademik import SivitasAkademik

# class declaration, class Mahasiswa sebagai cucu dari class Human 
# dan anak dari Class Sivitas Akademik
class Mahasiswa(SivitasAkademik):
    
    # Private attributes
    __nim=0
    __prodi=""
    __fakultas=""

    # contructor 
    def __init__(self,nim=0,prodi="",fakultas=""):
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas

    #Getter dan Setter

    # Get nim
    def getNim(self):
        return self.__nim
    
    # set nim
    def setNim(self, nim):
        self.__nim = nim
    
    # get prodi
    def getProdi(self):
        return self.__prodi
    
    # set prodi
    def setProdi(self, prodi):
        self.__prodi = prodi
    
    # get fakultas
    def getFakultas(self):
        return self.__fakultas
    
    # set fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
    

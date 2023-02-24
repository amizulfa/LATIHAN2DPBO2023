# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 2
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

from Human import Human

# class declaration, class ini sebagai anak dari class Human
# dan parent dari class Mahasiswa
class SivitasAkademik(Human):
    
    # Private attributes
    __asal_univ=""
    __email_edu=""

    # contructor 
    def __init__(self, asal_univ="", email_edu=""):
        self.__asal_univ = asal_univ
        self.__email_edu = email_edu

    # Getter dan Setter

    # Get asal univ
    def getAsal_univ(self):
        return self.__asal_univ
    
    # set asal univ
    def setAsal_univ(self, asal_univ):
        self.__asal_univ = asal_univ
    
    # get email
    def getEmail_edu(self):
        return self.__email_edu

    # set email
    def setEmail_edu(self, email_edu):
        self.__email_edu = email_edu
    

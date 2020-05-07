#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class bangun_ruang_sisi_lengkung
{
 protected:
   long double x,y,harga;
   long double vt, konvert; 
   long double pola; 
   long double biaya;
   const float phi = 3.14;
	
 public:
    virtual void get_data()=0;
};
class tabung: public bangun_ruang_sisi_lengkung
{
   public:
    void get_data()
    {
       cout<<"Sebuah tabung memiliki :"<<endl;
       cout<<"nilai jari-jari = "; cin>>x;
       cout<<"nilai tinggi = "; cin>>y;
       vt =phi*x*x*y;
       konvert=vt*1000.0;
       cout<<"Maka Volume tabung adalah " <<vt<<" m^3 = "<<konvert<<" liter"<<endl;
       cout<<"Jika tabung diatas akan diisi penuh menggunakan tabung kecil berukuran 1 liter dengan minyak goreng."<<endl;
       pola=konvert;
       cout<<"Maka akan membutuhkan "<<pola<<" kali pengisian."<<endl;
       cout<<"apabila harga minyak goreng per liter adalah Rp. "; cin>>harga;
       biaya= konvert*harga;
       cout<<"Maka biaya yang dikeluarkan hingga tabung penuh adalah Rp. "<<biaya<<endl;
    }
};

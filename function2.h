#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class bangun_ruang_sisi_lancip
{
 protected:
   long double x,y,harga;
   long double vk, konvert; 
   long double pola; 
   long double biaya;
   const float phi = 3.14;
       
 public:
   virtual void get_data()=0;
};
class kerucut: public bangun_ruang_sisi_lancip
{
   public:
    void get_data()
    {
       cout<<"Sebuah cetakan Kerucut memiliki : "<<endl;
       cout<<"nilai jari jari = "; cin>>x;
       cout<<"nilai tinggi = "; cin>>y;
       vk = phi*x*x*y*1/3;
       konvert = vk*0.001;
       cout<<"Maka Volume kerucut adalah = "<<vk<<" cm^3 = "<< konvert<<" liter"<<endl;   
       cout<<"Jika ibu ingin menuangkan beras dicetakan nasi menggunakan wadah 1 liter."<<endl;
       pola =konvert+1;
       cout<<"maka banyak ibu menuangkan adalah " <<setprecision(0) <<pola<< " kali penuangan"<<endl;
       cout<<"dan harga beras 1 liter adalah : RP. "; cin>>harga;
       biaya = harga*konvert;
       cout<<"maka biaya membuat nasi kuning kerucut adalah : Rp. "<<biaya<<endl;
	}
};

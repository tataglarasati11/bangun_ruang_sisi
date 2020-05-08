#include <iostream>
#include <conio.h>
#include <iomanip>
#include "function1.h"
#include "function2.h"
using namespace std;

void header(){
   cout<<"==============================================="<<endl;
   cout<<"menghitung Volume dan harga Kerucut dan Tabung "<<endl;
   cout<<"==============================================="<<endl;
}

int main()
{
  system("cls");
  tabung bung;
  kerucut cut;

  bangun_ruang_sisi_lengkung *list[1];
  list[1]=&bung;
  bangun_ruang_sisi_lancip *poin[1];
  poin[1]=&cut;
    do {
	int pilih;
	char ulang;
	system("cls");
	header();
	cout<<"1) Tabung\n";
	cout<<"2) Kerucut\n";
	cout<<"masukkan pilihan:";
	cin>>pilih;	  
	    if(pilih==1){
		list[1]->get_data();
	        getch();
	        }
	else if (pilih==2){
	        poin[1]->get_data();
	        getch();
		}
	 else{
	        cout <<"maaf pilihan yang anda masukkan salah"<<endl;
		getch();
		}
    	cout << "apakaah ingin menghitung lagi ? "<<endl ;
		cout << "Y/T"<<endl;
		cout << " pilih : ";
		cin >> ulang;	
		system("cls");
	}while(ulang=='Y'||ulang=='y');
	cout << "Terima kasih telah menggunakan program saya untuk menghitung"<<endl<<endl;
	getch ();
	cout << "=============================="<<endl;	
	cout << "Tatag Indah Larasati"<<endl;
	cout << " D04217025"<<endl;
   	cout << "=============================="<<endl;	
    	return 0;	
}

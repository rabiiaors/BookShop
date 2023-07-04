#include<iostream>
#include<sstream>
#include<string>
#include "kayit.h"
using namespace std;

 void kayit:: toplamtutarhesapla(){ 
     int fiyat,hesapla;
     int indirimorani=0;
     cout<<"almak istediginiz kitap fiyati:"; cin>>fiyat;
    cout<<"bu kitap turunde indirim bulunmamaktadir..    ";
      
        hesapla=fiyat-(fiyat*indirimorani)/100;
        cout<<"toplam odencek tutar="<<hesapla; 
   }
    
    void kayit:: bilgilerigoster(){
    	
    cout<<"kitapadi:"<<kitapadi<<endl<<"yazari:"<<yazar<<endl<<"fiyati:"<<fiyat<<endl;
	cout<<"ucret hesabi:"<<fiyat;
	}

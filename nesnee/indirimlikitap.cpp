#include<iostream>
#include<sstream>
#include<string>
#include "indirimlikitap.h"
#include "kayit.h"
using namespace std;

 void indirimlikitap:: toplamtutarhesapla() {
     int fiyat,indirimorani,hesapla;
     cout<<"almak istediginiz kitap fiyati:"; cin>>fiyat;
     cout<<"almak istediginiz kitabin indirimorani:"; cin>>indirimorani;
      
        hesapla=fiyat-(fiyat*indirimorani)/100;
        cout<<"toplam odencek tutar="<<hesapla; }

void indirimlikitap:: bilgilerigoster(){
    cout<<"kitapadi:"<<kitapadi<<endl<<"yazari:"<<yazar<<endl<<"fiyati:"<<fiyat<<endl<<"indirim yüzdesi:"<<indirimorani;
}

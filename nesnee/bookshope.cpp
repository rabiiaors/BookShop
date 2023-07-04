#include<sstream>
#include<string>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "kayit.h"
#include "indirimlikitap.h"
#include "kullanilabilirlik.h"
#include "bookshope.h"
using namespace std;
 

// menü kýsmý
void bookshope::kontrolpaneli()
{
    system("cls");
    cout << "\n\n\t\t\t\t yapilabilecek islemler";
    cout << "\n\n1. Kitap Ekle";
    cout << "\n2. Liste Goster";
    cout << "\n3. Kitap Kontrol et";
    cout << "\n4. Kitap guncelle";
    cout << "\n5. Kitap Sil";
    cout<<"\n6. ucret hesapla";
    cout << "\n7. Cikis Yap";
}
 
// kitap kayýt kýsmý
void bookshope::kitapekle()
{
    system("cls");
    fstream file;
    int kopya;
    string kitapadi, yazaradi, id;
    cout << "\n\n\t\t\t\tKitap Ekleme";
    cout << "\n\nkitap ID : ";
    cin >> id;
    cout << "\nKitap adi : ";
    cin >> kitapadi;
    cout << "\nyazar adi: ";
    cin >> yazaradi;
    cout << "\nKopya sayisi : ";
    cin >> kopya;
 
    file.open("D:// book.txt",
              ios::out | ios::app);
    file << " " << id << " "
         << kitapadi << " " << yazaradi
         << " " << kopya<< "\n";
    file.close();
}
 
//kitap liste kýsmý
void bookshope::listegoster()
{
    system("cls");
    fstream file;
    int kopya;
    string kitapadi, id,yazaradi;
    cout << "\n\n\t\t\t\t\tKitap Listesi";
 

    file.open("D:// book", ios::in);
    if (!file)
        cout << "\n\nDosya acilma hatasi!";
    else {
 
        cout << "\n\n\nKitap ID\t\tKitap"
             << "\t\tYazar\t\tKitap "
                "Kopya sayisi\n\n";
        file >> id >> kitapadi;
        file >> yazaradi>> kopya;
 

        while (!file.eof()) {
 
            cout << "  " << id
                 << "\t\t" << kitapadi
                 << "\t\t" << yazaradi
                 << "\t\t" << kopya
                 << "\n\n";
            file >> id >> kitapadi;
            file >> yazaradi >> kopya;
        }
 
        system("pause");
 

        file.close();
    }
}
 
 //kitap ID ile kitap arama bölümü

void bookshope::kitapkontrol()
{
    system("cls");
    fstream file;
    int kopya, count = 0;
    string id, kitapadi, yazaradi, idd;
 
    cout << "\n\n\t\t\t\tKitap kontrolu";

    file.open("D:// book.txt", ios::in);
    if (!file)
        cout << "\n\nDosya acilma hatasi!";
    else {
 
        cout << "\n\nKitap ID : ";
        cin >> idd;
        file >> id >> kitapadi;
        file >> yazaradi >> kopya;
 
        while (!file.eof()) {
 
            if (idd == id) {
 
                system("cls");
                cout << "\n\n\t\t\t\t"
                     << "Kitap kontrol et";
                       //bak    
                cout << "\n\nKitap ID : "
                     << id;
                cout << "\nKitap adi : "
                     << kitapadi;
                cout << "\nYazar adi : "
                     << yazaradi;
                cout << "\nKopya sayisi : "
                     << kopya;
                cout << endl
                     << endl;
                count++;
                break;
            }
            file >> id >> kitapadi;
            file >> yazaradi>> kopya;
        }
        system("pause");
        file.close();
        if (count == 0)
            cout << "\n\nKitap id bulunamadi";
    }
}
 
//kitap guncelleme kýsmý

void bookshope::kitapguncelle()
{
    system("cls");
    fstream file, file1;
    int kopya, kopya2, count = 0;
    string kitapadi , kitapadi2,yazaradi;
    string yazaradi2, idd, id;
 
    cout << "\n\n\t\t\t\tKitap Guncelle";
    file1.open("D:// book1.txt",
               ios::app | ios::out);
    file.open("D:// book.txt", ios::in);
 
    if (!file)
        cout << "\n\nDosya acilma hatasi!";
    else {
 
        cout << "\n\nKitap id : ";
        cin >> id;
        file >> idd >> kitapadi;
        file >> yazaradi >> kopya;
 
        while (!file.eof()) {
            if (id == idd) {
                system("cls");
                cout << "\t\t\t\t"
                     << "Kitap Guncelle";
                cout << "\n\nYeni kitap adi : ";
                cin >> kitapadi2;
                cout << "\nYazaradi: ";
                cin >> yazaradi2;
                cout << "\nkopya sayisi : ";
                cin >> kopya;
                file1 << " " << id << " "
                      << kitapadi2 << " "
                      << yazaradi2<< " " << kopya2
                      << "\n\n";
                count++;
            }
            else
                file1 << " " << idd
                      << " " << kitapadi
                      << " " << yazaradi
                      << " " << kopya
                      << "\n\n";
            file >> idd >> kitapadi;
            file >> yazaradi>> kopya;
        }
        if (count == 0)
            cout << "\n\nKitap id"
                 << " Bulunamadi...";
    }
    cout << endl;
    system("pause");
 

    file.close();
    file1.close();
    remove("D:// book.txt");
    rename("D:// book1.txt",
           "D:// book.txt");
}
 
// kitap Id ile kitap silme bölümü
void bookshope::kitapsil()
{
    system("cls");
    fstream file, file1;
    int kopya, count = 0;
    string id, idd,kitapadi, yazaradi;
    cout << "\n\n\t\t\t\tKitap silme";
 
    file1.open("D:// book1.txt",
               ios::app | ios::out);
    file.open("D:// book.txt",
              ios::in);
 
    if (!file)
        cout << "\n\nDosya acilma hatasi...";
    else {
 
        cout << "\n\nKitap ID : ";
        cin >> id;
        file >> idd >> kitapadi;
        file >> yazaradi>> kopya;
        while (!file.eof()) {
 
            if (id == idd) {
 
                system("cls");
                cout << "\n\n\t\t\t\t"
                     << "Kitap Silme";
                cout << "\n\nKitap silindi "
                        "Basarili...\n\n";
                count++;
            }
            else
                file1 << " " << idd
                      << " " << kitapadi
                      << " " << yazaradi
                      << " " << kopya
                      << "\n\n";
            file >> idd >> kitapadi;
            file >> yazaradi >> kopya;
        }
        if (count == 0)
            cout << "\n\nKitap ID "
                 << "Bulunamadi...";
    }
    system("pause");
 

    file.close();
    file1.close();
    remove("D:// book.txt");
    rename("D:// book1.txt",
           "D:// book.txt");
}
// çok biçimlilik ve kalýtým ile  oluþturulan fonksiyon kýsmý
void bookshope::ucrethesapla()
{

  int x;
     cout<<"\nkitap turleri\n 1-indirimli kitap \n 2-normal\n ucret odemek istediginiz kitap turu:"; cin>>x;
     if(x==1){
	indirimlikitap kitap;
	kitap.toplamtutarhesapla();}
	else if(x==2){
	   kayit kitapp;
	kitapp.toplamtutarhesapla();
	}


}


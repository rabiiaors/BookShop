
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

int main() {
	// switch case  ile secim kýsmý
	
	    cout<<"bookshope kitap merkezine hos geldiniz...\n\n"; 
  
    int secim;
    char x;
    bookshope b;
 
    while (1) {
 
        b.kontrolpaneli();
        cout << "\n\nYapmak istediginiz secim: ";
        cin >> secim;
        switch (secim) {
 
        case 1:
            do {
 
                b.kitapekle();
                cout << "\n\nBaska kitap eklemek ister misiniz? "<<"\n"<< "(e/h) : ";
                cin >> x;
            } while (x == 'e');
            break;
 
        case 2:
            b.listegoster();
            break;
 
        case 3:
            b.kitapkontrol();
            break;
        case 4:
            b.kitapguncelle();
            break;
 
        case 5:
            b.kitapsil();
            break;
            
       case 6:
          b.ucrethesapla();
            break;   
 
        case 7:
            exit(0);
            break;
 
        default:
            cout << "\n\nGECERSÝZ SECÝM\n";
        }
    }    
    return 0;}
    

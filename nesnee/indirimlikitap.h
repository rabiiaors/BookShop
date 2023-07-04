#include<string>
#ifndef INDIRIMLIKITAP_H
#define INDIRIMLIKITAP_H
#include "kayit.h"
using namespace std;
 class indirimlikitap : public kayit {
     public:
     int indirimorani;
    void bilgilerigoster();
    void  toplamtutarhesapla();
 };

#endif

#include<iostream>
#include<sstream>
#include<string>
#include "kullanilabilirlik.h"
using namespace std;
void kullanilabilirlik :: setkacinciel(int k){
	kacinciel=k;
}
 int kullanilabilirlik:: getkacinciel(){
	 return kacinciel;}
	 
	 void kullanilabilirlik ::yazdir(){
	 	cout<<kacinciel;
	 }

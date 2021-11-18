#include <iostream>

using namespace std;


void tambah(int angka1,int angka2){
	int hasil;
	hasil = angka1 + angka2;
	cout<<"Penjumlahan dari " <<angka1 <<" dan " <<angka2 <<" : " << hasil<<endl;
}
void kurang(int angka1,int angka2){
	int hasil;
	hasil = angka1 - angka2;
	cout<<"Pengurangan dari " <<angka1 <<" dan " <<angka2 <<" : " << hasil<<endl;
}

void perkalian(int angka1,int angka2){
	int hasil;
	hasil = angka1 * angka2;
	cout<<"Perkalian dari " <<angka1 <<" dan " <<angka2 <<"   : " << hasil<<endl;
}
void pembagi(int angka1,int angka2){
	int hasil;
	hasil = angka1 / angka2;
	cout<<"Pembagian dari " <<angka1 <<" dan " <<angka2 <<"   : " << hasil<<endl;
}
int main(){
	
	int angka1,angka2,kali,tmbh,krg,bagi;
	
	cout<<"Perhitungan penjumlahan,Pengurangan,Perkalian,dan Pembagian \n";
	cout<< "Masukan angka pertama : ";
	cin>> angka1; 
	cout<< "Masukan angka kedua : ";
	cin >> angka2;
	tambah(angka1,angka2);
	kurang(angka1,angka2);
	perkalian(angka1,angka2);
	pembagi(angka1,angka2);
	
}
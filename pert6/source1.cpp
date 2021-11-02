#include <iostream>
using namespace std;

void cetakUmur(int umur){
 cout<< "Halo, Umur kamu adalah " <<umur <<" tahun";
}
int main(){
 int angka;

 cout<<"masukan umurmu : ";
 cin>>angka;
 cetakUmur(angka);
 getchar();
 return 0;
}
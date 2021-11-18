#include <iostream>
using namespace std;

void orenonenrei(int umur){
 cout<< "Berarti usia kalian sekarang adalah " <<umur <<" tahun";
}  
int main(){
 int umur;

 cout<<"masukan umurmu : ";
 cin>>umur;
 orenonenrei(umur);
 getchar();
 return 0;
}
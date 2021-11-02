#include <iostream>
using namespace std;

void cetakUmur(int umur){ 
 cout<< "Halo, Umur kamu adalah " <<umur <<" tahun"; /** dari yang sudah di ketik tadi nanti akan memasukan ke umur jadi int umur itu memiliki data dari angka yang sudah di ketik tadi **/
}
int main(){
 int angka; /** menginisialiasi angka **/

 cout<<"masukan umurmu : "; /** memasukan umur **/
 cin>>angka; /** cin berfungsi memasukan data ke umur misal menulis 20 nanti akan di masukan ke dalam inisial angka **/
 cetakUmur(angka); /** menjalankan funsgi dari cetakumur **/
 getchar();
 return 0;
}

disini dirubah dari bahasa c ke bahasa c++
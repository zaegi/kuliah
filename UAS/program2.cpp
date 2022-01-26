#include <iostream>
#include <string.h>
using namespace std;

struct matkul{
    string kd_matkul;
    string nm_matkul;
}; matkul matkul;


void koderumatekuru(string kd){
	string *akubukanwibu = &kd; 
    cout<<"Kode dari matkul tersebut adalah : "<<kd<<endl;
    cout<<"Alamat memori dari kode matkul adalah : "<<&kd<<endl;
    cout<<"Pointer dari alamat memori kode matkul tersebut adalah : "<<*akubukanwibu<<endl;
}
void namaematekuru(string nm){
	
	string *akubukanwibu = &nm;
	cout<<"Nama dari matkul tersebut adalah : "<<nm<<endl;
    cout<<"Alamat memori dari Nama matkul adalah : "<<&nm<<endl;
    cout<<"Pointer dari alamat memori Nama matkul tersebut adalah : "<<*akubukanwibu<<endl;
}
int main(){

    cout<<"Masukan Kode Mata kuliah : ";
    cin>>matkul.kd_matkul; 
    cout<<"Masukan Nama Mata kuliah : ";
    cin>>matkul.nm_matkul;
    koderumatekuru(matkul.kd_matkul);
    namaematekuru(matkul.nm_matkul);
}
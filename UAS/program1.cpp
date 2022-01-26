#include <iostream>
#include <string.h>
using namespace std;

struct matkul{
    string kd_matkul;
    string nm_matkul;
}; matkul matkul;

int main(){

    
	string *pointerkd = &matkul.kd_matkul; 
	string *pointernm = &matkul.nm_matkul; 
    cout<<"Masukan Kode Mata kuliah : ";
    cin>>matkul.kd_matkul; 
    cout<<"Masukan Nama Mata kuliah : ";
    cin>>matkul.nm_matkul;
    cout<<"Kode dari matkul tersebut adalah : "<<matkul.kd_matkul<<endl;
    cout<<"Alamat memori dari kode matkul adalah : "<<&matkul.kd_matkul<<endl;
    cout<<"Pointer dari alamat memori kode matkul tersebut adalah : "<<*pointerkd<<endl;
    cout<<"Nama dari matkul tersebut adalah : "<<matkul.kd_matkul<<endl;
    cout<<"Alamat memori dari Nama matkul adalah : "<<&matkul.kd_matkul<<endl;
    cout<<"Pointer dari alamat memori Nama matkul tersebut adalah : "<<*pointerkd<<endl;
}
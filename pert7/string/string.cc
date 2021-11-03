#include <iostream>
#include <cstring>
using namespace std;

struct  mahasiswa{
    string nama;
    string pjg;
};mahasiswa mhs[20];
class nim{
    public:
        long int nimm;
};
nim nm[20];
int main(){
    mhs[1].nama = "deza";
    nm[1].nimm = 20170801101;
    mhs[1].pjg = "egitanta";
    cout<<mhs[1].nama<<" ";cout<<mhs[1].pjg<<endl;
    cout<<nm[1].nimm;

}
#include <iostream>
#include <array>

using namespace std;


int main(){

int a[9], b;

cout<< "memory alokasi : " << sizeof(int)<<endl;

for (b=0;b<10; b++){

    cout<<"alamat memory : "<<b <<&a[b]<<endl;
    }
    return 0;
}
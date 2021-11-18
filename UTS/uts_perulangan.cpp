#include <iostream>
using namespace std;

int main(){
	int n, s, i, j;
    cout<< "Masukkan jumlah baris : "; //memasukan jumalah dari baris.
    cin >> n; //n nanti akan di jadikan sebuah inisial yang nanti akan di isi oleh jumlah baris yang tadi kita masukan tersebut.
    for (i = 1; i <= n; i++){ // perulangan ini dilakukan untuk malukan perulangan dari baris yang akan kita masukan.
        for (s = i; s < n; s++) // for untuk bagian ini berguna untuk memberikan spasi pada baris
            cout << " ";
        for (j = 1; j <= i; j++) //perulangan ini memberikan tanda untuk baris tersebut sesuai jumlah yang kita masukan
                cout << "*";
                cout << "\n"; // memberikan enter untuk baris tersebut
				
		}
}
#include <iostream>
using namespace std;

int main(){

    int a[3][3] = {{1,7,3},{4,5,6},{1,2,3}};

    cout << a <<endl;
    for(int n=0;n<3;n++){

        for(int j=0;j<3;j++){
            cout<<"element ke =["<<n<<"]["<<j<<"] ";
            cout<<a[n][j]<<endl;
        }
    }
}
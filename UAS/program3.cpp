#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createfile(){
	string text;
	ofstream myFile("./UAS/soalganjil.txt");
	myFile.close();
	fstream file;
	std::cout<<"Masukan textnya : ";
	getline(cin>>ws,text);
	file.open("./UAS/soalganjil.txt");
	if (file.is_open()){
		file.write(text.data(),text.size());
		cout<<"done"<<endl;
	}
}

void editfile(){
	string text;
	ofstream myFile("./UAS/soalganjil.txt");
	myFile.close();
	cout<<text;
	fstream file;
	std::cout<<"Masukan textnya : ";
	getline(cin>>ws,text);
	file.open("./UAS/soalganjil.txt");
	if (file.is_open()){
		file.write(text.data(),text.size());
		cout<<"done"<<endl;
	}
}
void readfile(){
	ifstream myFile;
    char text;

    myFile.open("./UAS/soalganjil.txt");
    if(!myFile.fail()){
    	cout<<"Isi File tersebut adalah --> ";
    	while(!myFile.eof()){
    		myFile.get(text);
    		cout<<text;
    	
		}
		cout<<endl;
	}
}
int main(){
	int pil;
	string text;
	ifstream myFile;
	cout<<"program create read text\n";
	cout<<"1. Create text\n2. Read text\n3. Exit\n";
	cout<<"masukan pilihan : ";
	cin>>pil;
	switch(pil){
		case 1:
			myFile.open("./UAS/soalganjil.txt");
			if (myFile.fail()){
				createfile();
				
			}else{
				editfile();
				
			}
			main();
			return 0;
		
		case 2:
			readfile();
			main();
			return 0;

		case 3:
			cout<<"close program";
			exit(3);
			return 3;
			
	}
	
}
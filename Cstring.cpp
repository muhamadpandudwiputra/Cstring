//C-string adalah urutan karakter yang disimpan dalam blok memori berurutan seperti array
//dan diakhiri dengan karakter Null ('\0').
#include<iostream>
using namespace std;

int main(){
//	char nama[15]="Pandu";
//	char prodi[]="Ilkom";
//	
//	cout<<nama<<endl;
//	cout<<sizeof(nama)<<endl;
//	
//	cout<<prodi<<endl;
//	cout<<sizeof(prodi)<<endl;
//	
//	for(int i=0;i<sizeof(prodi);i++)
//	cout<<prodi[i]<<" "<<(prodi[i]=='\0'?"Null":"Not Null")<<endl;

char nama[15];
char npm[10];

cin.get(nama,15);
cin.ignore();
cin.get(npm,10);

cout << "Nama : " << nama << endl;
cout << "NPM : " << npm <<endl;
}

#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
main()
{
	char nama[30];
	cout<<"==================================="<<endl;
	printf("Nama : ");
	gets(nama);
	cout<<"==================================="<<endl;
	cout<<"Panjang nama   :"<<strlwr(nama)<<endl;
	cout<<"==================================="<<endl;
	cout<<endl<<endl;
	system("PAUSE");	
}

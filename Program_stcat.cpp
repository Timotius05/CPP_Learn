#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
main()
{
	char nama[30];
	char nim[30];
	cout<<"=================================="<<endl;
	printf("Nama Siswa      :");
	gets(nama);
	printf("No. Induk Siswa :");
	gets(nim);
	cout<<"==================================="<<endl;
	cout<<"Gabungan nama dan nim         :"<<strcat(nama,nim)<<endl;
	cout<<"==================================="<<endl;
	cout<<endl<<endl;
	system("PAUSE");
	
}


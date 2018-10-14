#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
main()
{
	char nama[30];
	char nis[30];
	cout<<"=================================="<<endl;
	printf("Nama Siswa      :");
	gets(nama);
	printf("No. Induk Siswa :");
	gets(nis);
	cout<<"==================================="<<endl;
	cout<<"Copy NIS         :"<<strcpy(nama,nis)<<endl;
	cout<<"==================================="<<endl;
	cout<<endl<<endl;
	system("PAUSE");
	
}


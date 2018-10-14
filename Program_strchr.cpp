#include <conio.h>
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
using namespace std;

main()
{
	char nama[50]="SMK Telkom Purokwerto";
	char dicari='T';
	char*hasil;
	hasil=strchr(nama,dicari);
	cout<<hasil<<", huruf yang dicari= "<<dicari;
	return 0;
}

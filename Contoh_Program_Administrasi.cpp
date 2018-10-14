#include <conio.h>
#include <iostream>
using namespace std;
main()
{
	char NIS[5]="1001", NAMA[50]="Timotius Muliawan Sugiarto", ALAMAT[60]="jl. Penatusan No 19A Purwokerto";
	int DSP=10500000, SPP=430000, BULAN= 36;
	int TOTAL=DSP+(SPP*BULAN);
	cout <<"No. Induk Siswa             : " <<NIS;
	cout <<"\nNama Siswa                  : " <<NAMA;
	cout <<"\nAlamat                      : " <<ALAMAT;
	cout <<"\nUang Dana SaePra(DSP)       : " <<DSP;
	cout <<"\nSPP per Bulan               : " <<SPP;
	cout <<"\nSelama 3 Tahun              : " <<BULAN<<" BULAN";
	cout <<"\nTotal Anggaran              : " <<TOTAL;     
}

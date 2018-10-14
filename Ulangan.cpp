#include <conio.h>
#include <iostream>
using namespace std;
main ()
{
	char nis[10], nama[20], kelas[20];
	float A,B,C,D;
	printf(".....INPUT DATA SISWA.....");
	printf("\nMasukan NIS Anda                        :");
	gets(nis);
	printf("Masukan Nama Anda                       :");
	gets(nama); 
	printf("Masukan Kelas Anda                      :");
	gets(kelas);
	printf("Masukan Nilai Matematika Anda           :");
	cin>>A;
	printf("Masukan Nilai Bahasa Inggris Anda       :");
	cin>>B;
	printf("Masukan Nilai Bahasa Indonesia Anda     :");
	cin>>C;
	
	D=(A+B+C)/3;
	
	printf("\n\n.....OUTPUT DATA SISWA.....");
	cout<<"\nNIS Anda                                 :"<<nis;
	cout<<"\nNama Anda                                :"<<nama;
	cout<<"\nKelas Anda                               :"<<kelas;
	cout<<"\nNilai Matematika Anda                    :"<<A;
    cout<<"\nNilai Bahasa Inggris Anda                :"<<B;
    cout<<"\nNilai Bahasa Indonesia Anda              :"<<C;
    printf("\n\n================================"); 
	cout<<"\n\nNilai Rata Rata Anda                     :"<<D;   
	printf("\n\n...............SELAMAT!!!..............."); 	
}

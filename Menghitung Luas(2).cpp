#include <conio.h>
#include <iostream>
using namespace std;
main ()
{
	int angka;
	cout<<"Menu Pilihan"<<endl;
	cout<<"1. Menghitung Luas Lingkaran"<<endl;
	cout<<"2. Menghitung Luas Persegi Panjang"<<endl;
	cout<<"3. Menghitung Luas Segitiga"<<endl;
	cout<<"4. Selesai"<<endl;
	cout<<"Masukan Pilihan Anda : ";
	cin>>angka;
	
	if(angka==1)
	{
		int r;
		float phi=3.14,luas;
		
		cout<<"\nMasukan Jari Jari Lingkaran : ";
		cin>>r;
		
		luas=phi*r*r;
		cout<<"\nLuas Lingkaran : "<<luas;
		return 0;
	}
	
	if(angka==2)
	{
		int p,l,luas;
		
		cout<<"\nMasukan Panjang Persegi Panjang : ";
		cin>>p;
		cout<<"Masukan Lebar Persegi Panjang : ";
		cin>>l;
		
		luas=p*l;
		cout<<"\nLuas Persegi Panjang : "<<luas;
		return 0;
	}
	if(angka==3)
	{
		float set=0.5,a,t,luas;
		cout<<"\nMasukan Alas Segitiga : ";
		cin>>a;
		cout<<"Masukan Tinggi Segitiga : ";
		cin>>t;
		
		
		luas=set*a*t;
		cout<<"\nLuas Segitiga : "<<luas;
		return 0;
	}
	if(angka==4)
	{
		return 0;
	}
}

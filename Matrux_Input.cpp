#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
	int i,j,hasil[2][2];
	int m1[2][2];
	int m2[2][2];
	int mata,matb,matc;
	cout<<"masukkan Matrix 1: ";
	cin>>mata;
	cout<<"masukkan Matrix 2: ";
	cin>>matb;
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	system("cls");
	cout<<"\nHasilnya..."<<endl<<endl;
	cout<<"Matrix 1 + Matrix 2 = Matrix 3";
	
	for(i=0;i<2;i++)
	{
		cout<<'\n';
		for(j=0;j<2;j++)
		cout<<setw(4)<<m1[i][j];cout<<" ";
		for(j=0; j<2; j++)
		cout<<setw(4)<<m2[i][j];cout<<" ";
		for(j=0;j<2;j++)
		cout<<setw(4)<<hasil[i][j];cout<<endl;
	}
	getch();
}

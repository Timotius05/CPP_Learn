#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
	int i,j,hasil[2][2];
	int m1[2][2]={{2,3},{4,5}};
	int m2[2][2]={{3,3},{3,3}};
	
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		hasil[i][j]=m1[i][j] + m2[i][j];
	}
	system("cls");
	cout<<"\nHasilnya..."<<endl<<endl;
	cout<<"Matrix A + Matrix B = Matrix C";
	
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

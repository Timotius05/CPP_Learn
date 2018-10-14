#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[25][25];
	int kolom, baris;
	cout<<"masukkan jumlah baris: ";
	cin>>baris;
	cout<<"masukkan jumlah kolom: ";
	cin>>kolom;
	for (int i=1;i<=baris;i++)
	{
	for (int b=1;b<=kolom;b++)
	{
		cout<<"Input Data ke"<<i<<" kolom ke"<<b<<" : ";
		cin>>a[i][b];
	}
	
}
cout<<endl<<"Tampilkan"<<endl<<endl;
for (int i=1;i<=baris;i++)
{
	for (int b=1;b<=kolom;b++)
	{
		cout<<setw(4)<<a [i][b];
			}
			cout<<endl;
}
}

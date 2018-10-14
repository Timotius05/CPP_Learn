#include<iostream>
using namespace std;
int main()
{
	int nilai[5];
	cout<<"== MENGISI ARRAY NILAI ==\n";
	for (int i=0; i<5; i++)
	{
		cout<<"Isi indek ke ["<<i<<"] = ";
		cin>>nilai[i];
	}
	for (int i=0; i<5; i++)
	{
		cout<<"\nTampil Nilai Indek ke ["<<i<<"] = "<<nilai[i];
	}
	return 0;
}

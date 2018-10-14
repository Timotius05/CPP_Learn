#include <iostream>

using namespace std;
int main ()
{
	int nilai[5];
	cout<<"=== Mengisi Array Nilai ===\n";
	for(int i=0; i<5; i++)
	{
		cout<<"Isi Indek ke ["<<i<<"] = ";
		cin>>nilai[i];
	}
	system("cls");
	for (int i=0; i<5; i++)
	{
		cout<<"\nTampil Nilai Indek ke ["<<i<<"] = "<<nilai[i];
	}
	return 0;
}

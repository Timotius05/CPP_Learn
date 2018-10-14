#include <iostream>

using namespace std;
int main()
{
	int nilai[5];
	cout<<"Masukan Nilai Array\n";
	for (int i=0; i<5; i++)
	{
		cout<<"isi indeks ke ["<<i<<"] = ";
		cin>>nilai[i];	
	}
	system("cls");
	for (int i=0; i<5; i++)
	{
		cout<<"\nTampilkan nilai ke ["<<i<<"] = "<<nilai [i];
	}
	return 0;
}


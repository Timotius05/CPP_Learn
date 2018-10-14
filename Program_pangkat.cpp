#include <iostream>
using namespace std;

int pangkat(int a, int N)
{
	if (N==0)
	{
		return (1);
	}
	else
	{
		return (a*pangkat (a, N-1));
	}
}
int main(int argc, char *argv[]) {
	int b, x, hasil_pangkat;
	cout<<"Masukan bilangan yang akan dipangkatkan    : ";
	cin>>b;
	cout<<"\nMau dipangkatkan berapa bilangan tersebut :";
	cin>>x;
	system("cls");
	hasil_pangkat = pangkat (b, x);
	cout<<"b = "<<b<<endl;
	cout<<"x = "<<x<<endl<<endl;
	cout<<"b^x = "<<b<<"^"<<x<<endl;
	cout<<"    = "<<hasil_pangkat;
	return 0;
}

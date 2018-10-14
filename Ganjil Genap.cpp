#include <iostream>
using namespace std;
main()
{
	int a,b;
	cout <<"NO KETERANGAN\n";
	for (a=1. ;a<=9; a=a+1)
	{
		b=(a%2);
		if (b==0)
		cout << a << "Genap";
		else
		cout << a << "Ganjil" ;
		cout <<endl;
	}
}

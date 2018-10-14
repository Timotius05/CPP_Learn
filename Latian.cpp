#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int x,i,j;
	float r;
	x,j = 0; i = 75;
	r = 0;
	while (i<=205)
	{
		cout <<i<<endl;
		j = j + i;
		i = i + 10;
		x = x + 1;
	}
	printf ("----- +");
	cout<<endl<<j<<endl;
	printf ("\nAverage\n");
	r=j/x;
	cout<<endl<<r;
}

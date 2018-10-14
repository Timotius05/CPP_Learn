#include <iostream>
#include <conio.h>

using  namespace std;
main()
{
	int c,a;
	a = 0;
	for (c=50 ; c<=80 ; c=c+2)
	{
		cout << c <<endl; 
		a = a+c;
	}
	printf ("------ +");
cout<<endl<<a;
}

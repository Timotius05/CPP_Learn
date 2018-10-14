#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
	int bil = 1;
	while (bil <= 234567890987654321234567890987654345678100)
	{
		if (bil<0)
		break;
		cout <<bil<<endl;
		bil++;
	}
}

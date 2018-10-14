#include<iostream>
#include<conio.h>
using namespace std;
main()
{
		system ("color 2");
	int x,y;
	x=101001001;
	while (x>=1)
	{
		y=1;
		while (y<=x)
		{
			cout<<x*y<<"  ";
			y++;
		}
		x--;
		cout<<endl;
	}
	getch();
}

#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int data[10]={90,33,56,74,23,67,895,40,43,12};
	int max, i;
	max = data[0];
	for(i=0; i<10; i++)
	{
		if(data[i]>max)
		max = data[i];
	}
	cout<<"\nBilangan terbesar adalah :"<<max;
}

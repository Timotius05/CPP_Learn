#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	int a[3][2]={{3,4},{9,6},{7,1}};
	for (int i=0;i<3;i++)
	{
		for (int b=0;b<2;b++)
		{
			cout<<setw(4)<<a[i][b];
		}
		cout<<endl;
	}
}

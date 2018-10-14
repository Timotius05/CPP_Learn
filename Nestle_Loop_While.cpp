#include<stdio.h>
#include<conio.h>
main()
{
	int j=1;
	while(j<=10)
	{
		int k=1;
		while(k<=10)
		{
			printf ("%4d", j*k);
			k++;
		}
		printf ("\n");
		j++;
	}
	getch();
}

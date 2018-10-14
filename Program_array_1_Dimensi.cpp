#include <stdio.h>
main()
{
	int nomor [6] = {1,23,17,4,-5,100};
	int i;
	printf("\nData Larik Dari Depan");
	for(i=0;i<6;i++)
	{
		printf("\nData ke - %d = %d", i+1, nomor [i]);
		
	}
	printf("\nData Larik Dari Belakang");
	for (i=5;i>=0;i--)
	{
		printf ("\nData  ke - %d = %d", i+1,nomor [i]);
	}

}

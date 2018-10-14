#include "stdio.h"
#include "conio.h"
main()
{
	
	int hari;
	puts("menentukan nama hari\n");
	puts("1 = Senin 2 = Selasa 3 = Rabu 4 = Kamis");
	puts("5 = Jumat 6 = Sabtu 7 = Minggu");\
	printf("\nMasukan kode hari(1-7): ");
	scanf("%d", &hari);
	switch(hari)
	{case 1 : puts("Hari Senin");
	break;
	 case 2 : puts("Hari Selasa");
	 break;
	 case 3 : puts("Hari Rabu");
	 break;
	 case 4 : puts("Hari Kamis");
	 break;
	 case 5 : puts("Hari Jumat");
	 break;
	 case 6 : puts("Hari Sabtu");
	 break;
	 case 7 : puts("Hari Minggu");
	 break;
	 deafult : puts("Kode hari yang Anda masukan SALAH");
	
		}
		getch();
}

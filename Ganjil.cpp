#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
main()
{
   cobalagi:
		int a,b;
		char lagi ;
		cout<<"Masukan Angka Bulat   : ";
		cin>>a;
		b=(a%2);
		if(b==0)
		{
			cout<<"Bilangan tersebut adalah genap";
		}
		else 
		{
			cout<<"Bilangan tersebut adalah ganjil";
		}
		
		cout<<"\n\nCoba Lagi (Y/G)  :";
		lagi=getch();
		if (lagi=='Y'|| lagi=='y')goto cobalagi;
		return 0;
}

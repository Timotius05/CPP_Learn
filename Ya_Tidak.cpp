#include <iostream>
#include <conio.h>
using namespace std;
main()
{
char yt;

awal:
cout<<"INDAHNYA BERBAGI"<<endl<<endl;
cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
cin>>yt;
cout<<endl;

if(yt=='Y' || yt=='y')
{goto awal;}
if(yt=='T' || yt=='t')
{goto selesai;}

selesai:
cout<<"Terima Kasih"; // Hanya variasi saat keluar

getch();
}

#include <iomanip>
#include <iostream>
#include <conio.h>
using namespace std;
main(){
//input matrik pertama
int matrik1[2][2];
int matrik2[2][2];
int matrik3[2][2];
int temp,x,y,z;

for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<"Masukan nilai A"" : ";
cin>>matrik1[x][y];
}
}
cout<<endl;
//input matrik kedua
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<"Masukan nilai B"" : ";
cin>>matrik2[x][y];
}
}

//rumus perkalian matrik
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
matrik3[x][y]=0;
for (int z =0;z<2;z++){
temp=matrik1[x][z]*matrik2[z][y];
matrik3[x][y]=matrik3[x][y]+temp;
}
}
}
//output matrik hasil perkalian
	cout<<"\nHasilnya...."<<endl<<endl;
	cout<<"Matrix A x Matrix B = Matrix C";
	for (x=0;x<2;x++)
	{
		cout<<'\n';
		for (y=0;y<2;y++); 
		cout<<setw(4)<<matrik1[x][y];cout<<"  ";	}
	cout<<endl;
	for (int x = 0;x<2;x++){
	for (int y =0;y<2;y++){
	cout <<matrik3[x][y]<<" ";
	}
	cout<<endl;
	}
	getch();
	}

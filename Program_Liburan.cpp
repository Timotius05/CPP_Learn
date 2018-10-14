#include <iostream>
#include <conio.h>
using namespace std;
main()
{
		int angka, refund, beli, rekening;
		char yt;

	cout<<"-----------------------------------------------------"<<endl;
	cout<<"---------------------TELKOM AIRPOT-------------------"<<endl;
	cout<<"-----------------------------------------------------"<<endl<<endl;
	mulai:
	cout<<"1. Jadwal Keberangkatan"<<endl;
	cout<<"2. Beli Tiket Pesawat"<<endl;
	cout<<"3. Refund Tiket"<<endl;
	cout<<"4. Selesai"<<endl;
	cout<<"\nMasukan Pilihan Anda : ";
	cin>>angka;
	
	if(angka==1)
	{
		cout<<"\n1. Telkom Airport - Yogyakarta   09:00 - 10:00"<<endl;
		cout<<"2. Telkom Airport - Surabaya     12:00 - 14:00"<<endl;
		cout<<"3. Telkom Airport - Balikpapan   13:00 - 13:30"<<endl;
		cout<<"4. Telkom Airport - Jakarta      10:00 - 13:00"<<endl;
		cout<<"5. Telkom Airport - Hongkong     12:00 - 18:00"<<endl;
		cout<<"6. Telkom Airport - Meikarta     07:00 - 09:00"<<endl;
		cout<<"7. Telkom Airport - Puertorico   09:00 - 15:00"<<endl;
		
		cout<<"\nApakah anda ingin mengulang ? [Y/T] : ";
		cin>>yt;
		cout<<endl;

		if(yt=='Y' || yt=='y')
		{goto mulai;}
		if(yt=='T' || yt=='t')
		{return 0;}
		
	}
	if(angka==2)
	{
		cout<<"\nTujuan : "<<endl;
		cout<<"\n1. Yogyakarta : Rp 250.000,-"<<endl;
		cout<<"2. Surabaya   : Rp 400.000,-"<<endl;
		cout<<"3. Balikpapan : Rp 500.000,-"<<endl;
		cout<<"4. Jakarta    : Rp 450.000,-"<<endl;
		cout<<"5. Hongkong   : Rp 1.250.000,-"<<endl;
		cout<<"6. Meikarta   : F  R  E  E  "<<endl;
		cout<<"7. Puertorico : Rp 1.500.000,-"<<endl;
		cout<<"\nBeli Tiket Untuk Jurusan nomor Berapa : ";
		cin>>beli;
		
		if(beli==1)
		{
			cout<<"Masukan Nomor Rekening Anda : ";
			cin>>rekening;
			cout<<"\nUntuk Jurusan Yogyakarta Seharga Rp 250.000,-"<<endl;
			cout<<"Transaksi Berhasil"<<endl;
			cout<<"Terimakasih Telah Menggunakan Layanan Kami"<<endl;
			cout<<"\nApakah anda ingin mengulang ? [Y/T] : ";
			cin>>yt;
			cout<<endl;

			if(yt=='Y' || yt=='y')
			{goto mulai;}
			if(yt=='T' || yt=='t')
			{cout<<"\n\n\n-----------------------------------------------------"<<endl;
			cout<<"----------------------TERIMAKASIH--------------------"<<endl;
			cout<<"-----------------------------------------------------"<<endl;}
		}
		
		if(beli==2)
		{
			cout<<"Masukan Nomor Rekening Anda : ";
			cin>>rekening;
			cout<<"\nUntuk Jurusan Surabaya Seharga Rp 400.000,-"<<endl;
			cout<<"Transaksi Berhasil"<<endl;
			cout<<"Terimakasih Telah Menggunakan Layanan Kami"<<endl;
			cout<<"\nApakah anda ingin mengulang ? [Y/T] : ";
			cin>>yt;
			cout<<endl;

			if(yt=='Y' || yt=='y')
			{goto mulai;}
			if(yt=='T' || yt=='t')
			{cout<<"\n\n\n-----------------------------------------------------"<<endl;
			cout<<"----------------------TERIMAKASIH--------------------"<<endl;
			cout<<"-----------------------------------------------------"<<endl;}
		}
		
		if(beli==3)
		{
			cout<<"Masukan Nomor Rekening Anda : ";
			cin>>rekening;
			cout<<"\nUntuk Jurusan Balikpapan Seharga Rp 500.000,-"<<endl;
			cout<<"Transaksi Berhasil"<<endl;
			cout<<"Terimakasih Telah Menggunakan Layanan Kami"<<endl;
			cout<<"\nApakah anda ingin mengulang ? [Y/T] : ";
			cin>>yt;
			cout<<endl;

			if(yt=='Y' || yt=='y')
			{goto mulai;}
			if(yt=='T' || yt=='t')
			{cout<<"\n\n\n-----------------------------------------------------"<<endl;
			cout<<"----------------------TERIMAKASIH--------------------"<<endl;
			cout<<"-----------------------------------------------------"<<endl;}
		}
		
		if(beli==4)
		{
			cout<<"Masukan Nomor Rekening Anda : ";
			cin>>rekening;
			cout<<"\nUntuk Jurusan Jakarta Seharga Rp 450.000,-"<<endl;
			cout<<"Transaksi Berhasil"<<endl;
			cout<<"Terimakasih Telah Menggunakan Layanan Kami"<<endl;
			cout<<"\nApakah anda ingin mengulang ? [Y/T] : ";
			cin>>yt;
			cout<<endl;

			if(yt=='Y' || yt=='y')
			{goto mulai;}
			if(yt=='T' || yt=='t')
			{cout<<"\n\n\n-----------------------------------------------------"<<endl;
			cout<<"----------------------TERIMAKASIH--------------------"<<endl;
			cout<<"-----------------------------------------------------"<<endl;}
		}
		
		if(beli==5)
		{
			cout<<"Masukan Nomor Rekening Anda : ";
			cin>>rekening;
			cout<<"\nUntuk Jurusan Hongkong Seharga Rp 1.250.000,-"<<endl;
			cout<<"Transaksi Berhasil"<<endl;
			cout<<"Terimakasih Telah Menggunakan Layanan Kami"<<endl;
			cout<<"\nApakah anda ingin mengulang ? [Y/T] : ";
			cin>>yt;
			cout<<endl;

			if(yt=='Y' || yt=='y')
			{goto mulai;}
			if(yt=='T' || yt=='t')
			{cout<<"\n\n\n-----------------------------------------------------"<<endl;
			cout<<"----------------------TERIMAKASIH--------------------"<<endl;
			cout<<"-----------------------------------------------------"<<endl;}
		}
		
		if(beli==6)
		{
			cout<<"Masukan Nomor Rekening Anda : ";
			cin>>rekening;
			cout<<"\nUntuk Jurusan Meikarta Gratis Untuk Anda"<<endl;
			cout<<"Transaksi Berhasil"<<endl;
			cout<<"Terimakasih Telah Menggunakan Layanan Kami"<<endl;
			cout<<"\nApakah anda ingin mengulang ? [Y/T] : ";
			cin>>yt;
			cout<<endl;

			if(yt=='Y' || yt=='y')
			{goto mulai;}
			if(yt=='T' || yt=='t')
			{cout<<"\n\n\n-----------------------------------------------------"<<endl;
			cout<<"----------------------TERIMAKASIH--------------------"<<endl;
			cout<<"-----------------------------------------------------"<<endl;}
		}
		
		if(beli==7)
		{
			cout<<"Masukan Nomor Rekening Anda : ";
			cin>>rekening;
			cout<<"\nUntuk Jurusan Puertorico Seharga Rp 1.500.000,-"<<endl;
			cout<<"Transaksi Berhasil"<<endl;
			cout<<"Terimakasih Telah Menggunakan Layanan Kami"<<endl;
			cout<<"\nApakah anda ingin mengulang ? [Y/T] : ";
			cin>>yt;
			cout<<endl;

			if(yt=='Y' || yt=='y')
			{goto mulai;}
			if(yt=='T' || yt=='t')
			{cout<<"\n\n\n-----------------------------------------------------"<<endl;
			cout<<"----------------------TERIMAKASIH--------------------"<<endl;
			cout<<"-----------------------------------------------------"<<endl;}
		}
		
	}
	
	if(angka==3)
	{
		cout<<"\n1. Yogyakarta "<<endl;
		cout<<"2. Surabaya     "<<endl;
		cout<<"3. Balikpapan   "<<endl;
		cout<<"4. Jakarta      "<<endl;
		cout<<"5. Hongkong     "<<endl;
		cout<<"6. Meikarta     "<<endl;
		cout<<"7. Puertorico   "<<endl;
		cout<<"\nJurusan Nomor Berapa Yang Mau Di Refund : ";
		cin>>refund;
		cout<<"Masukan Kode Boking Anda : ";
		cin>>refund;
		cout<<"\nRefund Berhasil \nTiket Anda Sudah Di Uangkan \nCek Rekening Anda"<<endl;
		
		cout<<"\nApakah anda ingin mengulang ? [Y/T] : ";
			cin>>yt;
			cout<<endl;

			if(yt=='Y' || yt=='y')
			{goto mulai;}
			if(yt=='T' || yt=='t')
			{cout<<"\n\n\n-----------------------------------------------------"<<endl;
			cout<<"----------------------TERIMAKASIH--------------------"<<endl;
			cout<<"-----------------------------------------------------"<<endl;}
	}
	
	if(angka==4)
	{
	cout<<"\n\n\n-----------------------------------------------------"<<endl;
	cout<<"----------------------TERIMAKASIH--------------------"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	}
}

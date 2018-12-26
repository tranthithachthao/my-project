#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct ngaythang{
	int ngay;
	int thang;
	int nam;
};
	

int thang[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int KiemTra(int nam)
{
	if(nam%400 == 0 || (nam%4 == 0 && nam % 100 == 0) )
		return 1;
	return 0;
}
int TimSTT(ngaythang n)
{
int stt = 0;
	for(int i = 0; i < n.thang ; i++)
		stt += thang[i];
	stt += n.ngay;
	if(KiemTra(n.nam) == 1 && n.thang > 2) stt + 1;
	return stt;
		
}
ngaythang NgayTuSTT(int stt, int nam){
	ngaythang ngaycantim;
	int i =1;
	while(stt > thang[i])
	{
			stt -= thang[i];
		i++;
		
		if(KiemTra(nam) == 1 && i == 2)
			thang[i] = 29;
		}
		ngaycantim.ngay = stt;
		ngaycantim.thang = i;
		ngaycantim.nam=nam;
	    thang[2]=28;
	return ngaycantim;
}
ngaythang TruNgayThang(ngaythang n, int x){
	//x<=356
	int kq,nam;
	if (x < TimSTT(n))
		 kq = TimSTT(n)-x;
	else {
		nam = n.nam-1; 
		kq = TimSTT(n) + 365 - x;
		if (KiemTra(n.nam)==1 && (n.thang>2 || (n.thang==2 && n.ngay==29)))
			kq++;
		}
		cout << kq <<endl;
	return NgayTuSTT(kq,nam);
}

ngaythang CongNgayThang(ngaythang n, int x)
{
	int kq = x + TimSTT(n);
	int nam = n.nam;
	if(kq <= 365 )
		return NgayTuSTT(kq,nam);
	else if(KiemTra(nam) == 1)
		if(kq == 366)
			return 	NgayTuSTT(kq,nam);
		else
			return 	NgayTuSTT(kq - 366,nam +1);
		else
			return 	NgayTuSTT(kq - 365,nam +1);
}

int main()
{
	string st;
	int n;

	cout<<"nhap du lieu: ";
	getline(cin,st);
	char t[4];
	ngaythang x;
	t[0]=st[0];
	t[1]=st[1];
	x.ngay=atoi(t);
	cout<<"ngay :"<<x.ngay<<endl;
	t[0]=st[3];
	t[1]=st[4];
	x.thang=atoi(t);
	cout<<"thang :"<<x.thang<<endl;
	t[0]=st[6];
	t[1]=st[7];
	t[2]=st[8];
	t[3]=st[9];
	x.nam=atoi(t);
	cout<<"nam :"<<x.nam<<endl;


// Cach 2:
//int day, month, year;
//char c;

//cout << "Nhap ngay thang: ";
//cin >> day >> c >> month >> c >> year;
//cout << "Ngay " << day << " thang " << month << " nam " << year;
if(KiemTra(x.nam) == 1)
	cout<<endl<<"nam nhuan"<<endl;
else cout<<"khong phai nam nhuan"<<endl;
cout<< TimSTT(x) ;
cout<<endl<<"nhap so nguyen duong ";
	cin>>n;
 CongNgayThang(x, n);
 TruNgayThang(x, n);

	
}

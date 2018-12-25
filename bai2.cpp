#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct ngaythang{
	int ngay;
	int thang;
	int nam;
};

int KiemTra(int nam)
{
	if(nam%400 == 0 || (nam%4 == 0 && nam % 100 == 0) )
		return 1;
	return 0;
}

int main()
{
//	string st;
//	cout<<"nhap du lieu: ";
//	getline(cin,st);
//	char t[4];
//	ngaythang x;
//	t[0]=st[0];
//	t[1]=st[1];
//	x.ngay=atoi(t);
//	t[0]=st[3];
//	t[1]=st[4];
//	x.thang=atoi(t);
//	t[0]=st[6];
//	t[1]=st[7];
//	t[0]=st[8];
//	t[1]=st[9];
//	x.nam=atoi(t);


// Cach 2:
int day, month, year;
char c;

cout << "Nhap ngay thang: ";
cin >> day >> c >> month >> c >> year;
cout << "Ngay " << day << " thang " << month << " nam " << year;
if(KiemTra(year) == 1)
	cout<<endl<<"nam nhuan";
else cout<<"khong phai nam nhuan";
 
	
}

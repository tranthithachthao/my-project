#include<iostream>
#include<conio.h>
#include<string.h>
#include<vector>
#include<fstream>
using namespace std;
typedef struct {
	char ten[20];
	char sdt[11];
	char email[20], diachi[20];
	bool giotinh;
} Contact;
vector <Contact> db;
fstream f("input.dat");
void Docdanhba();
void Ghidanhba();
void ThemMoi(Contact c);
void LietKe();
void CapNhat(Contact c);
void XoaContact(char* sdt);

int main()
 {
 	Contact c;
 	ThemMoi(c);
 	LietKe();
 }
 
void ThemMoi(Contact c)
{	strcpy(c.ten,"Thach Thao");
	strcpy(c.sdt,"0123456");
	strcpy(c.email,"thachthao@gmail.com");
	db.push_back(c);
	Ghidanhba();
}
void Ghidanhba()
{
	FILE *f = fopen("input.dat", "rb");
	for(int i=0;i<db.size();i++)
		f-->(&db[i],sizeof(db),1,f);
		

}
void Docdanhba(){
}
void Xuat(Contact c){
	cout<<c.ten<< endl;
	cout<<c.sdt<< endl;
	cout<<c.email<< endl;
	cout<<c.diachi<< endl;}
void LietKe(){
	Docdanhba();
	for(int i =0; i < sizeof(db); i++)
		Xuat(db[i]);
	
}


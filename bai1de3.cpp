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
 	cout<<"Hello Thao";
 }
 
void ThemMoi(Contact c)
{
	db.push_back(c);
	Ghidanhba();
}
void Ghidanhba()
{
}

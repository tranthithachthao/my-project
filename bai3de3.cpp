#include<iostream>
#include<string.h>
#include<conio.h>
#include<vector>
#include<fstream>
#include<stdlib.h>
using namespace std;
struct ch_da{
	string ch;
	string a, b, c,d, da;
};
struct nguoi{
	string ten;
	int diem;
};

vector <ch_da> DanhSach;
void Xuat(ch_da de)
{	int diem;
	string dapan;
	cout<<de.ch<<endl;	
	cout<<de.a<<endl;
	cout<<de.b<<endl;
	cout<<de.c<<endl;
	cout<<de.d<<endl;
	cout<<"moi ban nhap dap an "; cin>>dapan;
		if(dapan == de.da){
		
			cout<< "dung roi hahaaa"<<endl;
			diem += 1;}
		else cout<<"sai roi huhuuuu"<<endl;
	cout<<diem;
}
void DocDe()
{
	for(int i=0;i<DanhSach.size();i++)
		Xuat(DanhSach[i]);
}

void LayDe(){
	int de;
	ch_da ds;
	cout<<"nhap so de: ";
	cin>>de;
	if(de == 1)
		{
			ifstream f("input.txt");
			string s, tl;
			int sl;
			getline(f,s); sl = atoi(s.c_str());// doi tu string sang int 
			for(int i= 0; i < sl; i++)
			{
				getline(f,s);ds.ch= s;
				getline(f,s);ds.a = s;
				getline(f,s);ds.b = s;
				getline(f,s);ds.c = s;
				getline(f,s);ds.d = s;
				getline(f,s);ds.da = s;
				DanhSach.push_back(ds);	
			}
			DocDe();	
		}
}

int main(){
	LayDe();
}

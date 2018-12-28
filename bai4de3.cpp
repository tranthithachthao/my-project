#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int n;
fstream fi;

void TaoMoi(int a[10][10], int &n)
{
	cout<<"nhap n: ";
	cin>>n;
	fi.open("do_thi.txt",ios::out);
	fi<<n<<endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
		cout<<"trong so"<<i<<"den"<<j<<":";
		cin>>a[i][j];
		fi<<a[i][j]<<" ";
		}
		fi<<endl;
	}
}
void DocFile(int a[10][10]){
	fi.open("do_thi.txt", ios::in);
	fi>>n;
	for(int i = 0; i < n; i++)
		{
		for(int j = 0; j < n; j++)
			fi>>a[i][j];
		}
			
	fi.close();
}
void XuatDoThi(int a[10][10], int n){
	for(int i = 0; i < n; i++){
	
		for(int j = 0; j < n; j++)
			cout<<a[i][j]<<" ";
			cout << endl;
		}
}

int main(){
	int a[10][10];
	TaoMoi(a, n);
	DocFile(a);
	XuatDoThi(a, n);
	
}

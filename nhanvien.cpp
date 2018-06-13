#include "nhanvien.h"
#include <iostream>
using namespace std;

int main()
{
	int N;
	cout<<"Nhap so luong nhan vien: ";
	cin>>N;
	Nhanvien *tap = new Nhanvien[N];
	for (int i = 0; i<N; i++)
	{
		cin>>tap[i];
	}
	cout<<endl;
	cout<<"Ho Ten \t\t\t Nam sinh \t Luong \t Don vi"<<endl;
	for (int i = 0; i<N; i++)
	{
		tap[i].HienThi();
	}
	return 0;
}

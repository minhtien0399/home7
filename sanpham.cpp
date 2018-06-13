#include "sanphamsuatkhau.h"

int main()
{
	int n;
	cout<<"Nhap so san pham: ";
	cin>>n;
	SanPhamSX *tap = new SanPhamSX[n];
	for (int i = 0; i<n; i++)
	{
		cin>>tap[i];
	}
	/*cout<<"Ma SP   "<<"Ten SP   "<<"Loai SP   "<<"Gia SP   "<<"Nam san xuat   "<<endl;
	for (int i = 0; i<n; i++)
	{
		tap[i].Print();
	}*/
}

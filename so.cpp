#include "songuyen.h"
#include "phanso.h"
#define MAX 6
int main()
{
	So *a[MAX];
	a[0] = new songuyen(4);
	a[1] = new Phanso(3,4);
	a[2] = new songuyen(5);
	a[3] = new Phanso(1,5);
	a[4] = new songuyen(2);
	a[5] = new Phanso(2,8);

	So *max;
	float temp=a[0] -> TinhBinhPhuong();
	for(int i=1; i< MAX; i++)
	{
		if ( a[i] -> TinhBinhPhuong() > temp)
		{
			temp = a[i] -> TinhBinhPhuong();
			max= a[i];
		}
	}
	cout<<"So co gia tri binh phuong lon nhat la:\n";
	max->Print();
	cout<<"\nCac so co trong mang la:\n ";
	for(int i=0; i<MAX; i++)
	{
		a[i] -> Print();
	}

}

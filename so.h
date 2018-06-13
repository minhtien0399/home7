#ifndef SO_H
#define SO_H
#include <iostream>
using namespace std;


class So
{

	public:
		virtual float TinhBinhPhuong()=0;
		virtual float TinhLapPhuong()=0;
		void Print(){
			cout<<"Binh phuong = "<<this->TinhBinhPhuong();
			cout<<"\nLap phuong = "<<this->TinhLapPhuong();
			cout<<endl;
		}

};
#endif

#ifndef SONGUYEN_H
#define SONGUYEN_H
#include "so.h"
using namespace std;

class songuyen: public So
{
	protected:
		int Songuyen;
	public:
		songuyen():Songuyen(0){}
		songuyen(int a):Songuyen(a){}
		float TinhBinhPhuong(){
			return this -> Songuyen * this -> Songuyen;
		}
		float TinhLapPhuong(){
			return this -> Songuyen * this -> Songuyen * this -> Songuyen;
		}

		~songuyen();

	
};
#endif

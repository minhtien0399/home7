#ifndef PHANSO_H
#define PHANSO_H
#include "so.h"
#include <math.h>

class Phanso: public So
{
	protected:
		int TuSo;
		int MauSo;
	public:
		Phanso():TuSo(0),MauSo(1){}
		Phanso(int a,int b):TuSo(a),MauSo(b){}
		int gettu()
		{
			return this->TuSo;
		}
		int getmau()
		{
			return this->MauSo;
		}
		virtual float TinhBinhPhuong()
		{
			return pow( gettu()/getmau(),2);
		}
		virtual float TinhLapPhuong()
		{
			return TinhBinhPhuong()* (gettu()/getmau());
		}
		~Phanso(){}

};
#endif

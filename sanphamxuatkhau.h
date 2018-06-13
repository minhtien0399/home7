
#ifndef SANPHAMSX_H
#define SANPHAMSX_H
#include "sanpham.h"

class SanPhamSX: public Sanpham
{
	protected:
		int Namsx;
		float GiaNL;
		float ChiPhi;
	public:
		SanPhamSX(): Sanpham(), Namsx(0), GiaNL(0), ChiPhi(0){}
		SanPhamSX(string m,string t,string l,int n,float g,float c):Sanpham(m,t,l),Namsx(n),
		GiaNL(g),ChiPhi(c){}
		void set(int n, float g, float cp)
		{
			this->Namsx = n;
			this->GiaNL = g;
			this->ChiPhi = cp;
		}
		int getn()const
		{
			return this->Namsx;
		}
		float getg()const
		{
			return this->GiaNL;
		}
		float getcp()const
		{
			return this->ChiPhi;
		}
		virtual float TinhGiaSanPham()const
		{
			return ( getg()+getcp() )*1.2;
		}
		void Print()const
		{
			Print();
			cout<<TinhGiaSanPham()<<"    ";
			cout<<getn()<<endl;
		}
		friend istream &operator >>(istream &in, SanPhamSX &sp)
		{
			cin>>sp;
			int n;
			float g,cp;
			cout<<"Nhap gia nguyen lieu, chi phi va nam san xuat: ";
			in>>n>>g>>cp;
			sp.set(n,g,cp);
			return in;
		}
		~SanPhamSX(){}
};
#endif

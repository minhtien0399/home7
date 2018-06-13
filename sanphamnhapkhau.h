#ifndef SANPHAMNK_H
#define SANPHAMNK_H
#include "SanPhamSX.h"

class SanPhamNK: public SanPhamSX
{
	protected:
		float GiaNK;
		float ChiPhiVC;
		string NuocNK;
		int NamNK;
	public:
		SanPhamNK():SanPhamSX(),GiaNK(0),ChiPhiVC(0),NuocNK(""),NamNK(0){}
		SanPhamNK(string m,string t,string l,int n,float g,float c,float gnk,float cpvc,string nnk, int namnk):
		SanPhamSX(m,t,l,n,g,c),GiaNK(gnk),ChiPhiVC(cpvc),NuocNK(nnk),NamNK(namnk){}
		void set(float gnk, float cpvc, string nnk, int namnk)
		{
			this->GiaNK = gnk;
			this->ChiPhiVC = cpvc;
			this->NuocNK = nnk;
			this->NamNK = namnk;
		}
		float getgnk()const
		{
			return this->GiaNK;
		}
		float getcpvc()const
		{
			return this->ChiPhiVC;
		}
		string getnnk()const
		{
			return this->NuocNK;
		}
		int getnamnk()const
		{
			return this->NamNK;
		}
		virtual float TinhGiaSanPham()const
		{
			return ( getgnk() + getcpvc() )*1.2;
		}
		void Print()const
		{
			Print();
			cout<<TinhGiaSanPham()<<"   "<<getnamnk()<<"   "<<getnnk()<<endl;
		}
		friend istream &operator >>(istream &in, SanPhamNK &sp)
		{
			cin>>sp;
			float a,b;
			string c;
			int d;
			cout<<"Nhap gia nhap khau, chi phi van chuyen, nuoc nhap khau va nam nhau khau: ";
			in>>a>>b>>c>>d;
			sp.set(a,b,c,d);
			return in;
		}
		~SanPhamNK(){}

};
#endif

#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <iostream>
using namespace std;

class Nhanvien
{
	protected:
		string Hoten;
		int Namsinh;
		int CMT;
		int LuongCB;
		int songaycong;
		string DonVi;
	public:
		Nhanvien(): Hoten(""), Namsinh(0), CMT(0), LuongCB(0), songaycong(0), DonVi(""){}
		Nhanvien(string a, int b, int c, float d, int e, string f):
		Hoten(a), Namsinh(b), CMT(c), LuongCB(d), songaycong(e), DonVi(f){}
		void set(string a, int b, int c, float d, int e, string f)
		{
			this->Hoten = a;
			this->Namsinh = b;
			this->CMT = c;
			this->LuongCB = d;
			this->songaycong = e;
			this->DonVi = f;
		}
		string getten()const
		{
			return this->Hoten;
		}
		int getns()const
		{
			return this->Namsinh;
		}
		int getcmt()const
		{
			return this->CMT;
		}
		int getlcb()const
		{
			return this->LuongCB;
		}
		int gettg()const
		{
			return this->songaycong;
		}
		string getdv()const
		{
			return this->DonVi;
		}
		float Tinhluong()const
		{
			return getlcb()*gettg()/26;
		}
		void HienThi()const
		{
			cout<<getten()<<"\t\t"<<getns()<<"\t\t\t"<<getlcb()<<"\t"<<getdv()<<endl;
		}
		friend istream &operator >>(istream &in, Nhanvien & nv)
		{
			cout<<"Nhap ho ten: ";
			cin.ignore(256, '\n');
			getline(in,nv.Hoten);
			cout<<"Nhap nam sinh: "; in>>nv.Namsinh;
			cout<<"Nhap CMT: "; in>>nv.CMT;
			cout<<"Nhap luong co ban: "; in>>nv.LuongCB;
			cout<<"Nhap so ngay cong tac: "; in>>nv.songaycong;
			cout<<"Nhap don vi: "; in>>nv.DonVi;
			return in;
		}


};
#endif

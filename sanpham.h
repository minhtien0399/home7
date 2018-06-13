#ifndef SANPHAM_H
#define SANPHAM_H
#include <iostream>
#include <string>
using namespace std;

class Sanpham
{
	protected:
		string Ma;
		string Ten;
		string Loai;
	public:
		Sanpham():Ma(""),Ten(""),Loai(""){}
		Sanpham(string m, string t, string l):Ma(m), Ten(t), Loai(l){}
		void set(string a, string b, string c)
		{
			this->Ma = a;
			this->Ten = b;
			this->Loai = c;
		}
		string getma()const
		{
			return this->Ma;
		}
		string getten()const
		{
			return this->Ten;
		}
		string getloai()const
		{
			return this->Loai;
		}
		virtual float TinhGiaSanPham()const{}
		void Print()const
		{
			cout<<getma()<<"     "<<getten()<<"   "<<getloai()<<"   ";
		}
		friend istream &operator >>(istream &in, Sanpham &b)
		{
			string x,y,z;
			cout<<"Nhap Ten, ma va loai san pham: ";
			in>>x>>y>>z;
			b.set(x,y,z);
			return in;
		}
		~Sanpham(){}
};
#endif

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;

class Account
{
	protected:
		int SoTK;
		string Ten;
		string pass;
		int Tien;
	public:
		Account():SoTK(0),Ten(""),pass(""),Tien(0){}
		Account(int a, string b, string c, int d):SoTK(a),Ten(b),pass(c),Tien(d){}
		int getsotk()const
		{
			return this->SoTK;
		}
		string getten()const
		{
			return this->Ten;
		}
		int gettien()const
		{
			return this->Tien;
		}
		int them(int b)
		{
			this->Tien = gettien()+b;
		}
		int tru(int b)
		{
			this->Tien = gettien()-b;
		}
		void Hienthi()const
		{
			cout<<"So tai khoan: "<<getsotk()<<endl;
			cout<<"Ten khach hang: "<<getten()<<endl;
			cout<<"So du hien co: "<<gettien()<<endl;
		}
		~Account(){}

};
#endif

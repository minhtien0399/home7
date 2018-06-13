#ifndef BANK_H
#define BANK_H
#include "Account.h"

class Bank: public Account
{
	public:
		void max()
		{
			itn N;
			cout<<"So luong khach hang: "; cin>>N;
			Account *ds = new Account[N];
			int max;
			for (int i = 0; i<N; i++)
			{
				if(max<ds[i].gettien())
				{
					max = ds[i].gettien;
				}
			}
			for (int i = 0; i<N; i++)
			{
				if(max == ds[i].gettien())
				{
					ds[i].Hienthi();
					cout<<endl;
				}
			}
		}
		void Am()
		{
			itn N;
			cout<<"So luong khach hang: "; cin>>N;
			Account *ds = new Account[N];
			Account *dsamtien = new Account[N];
			for (int i = 0; i<N; i++)
			{
				int j = 0;
				if(ds[i].gettien()<0)
				{
					dsamtien[j] = ds[i];
					j = j+1;
				}
			}
		}
};
#endif

#ifndef HINHCHUNHAT_H
#define HINHCHUNHAT_H
#include "Toado.h"
#include <cmath>

class Hinhchunhat: public Toado
{
	protected:
		Toado TT, DP;
	public:
		Hinhchunhat():TT(),DP(){}
		Hinhchunhat(float a, float b, float c, float d): TT(a,b), DP(c,d){}
		Toado getTT()const
		{
			return this->TT;
		}
		Toado getDP()const
		{
			return this->DP;
		}
		bool operator ==(Hinhchunhat b)
		{
			float dai1,rong1,dai2,rong2;
			dai1 = abs ( TT.getx() - DP.getx() );
			rong1 = abs ( TT.gety() - DP.gety() );
			dai2 = abs ( b.TT.getx() - b.DP.getx() );
			rong2 = abs ( b.TT.gety() - b.DP.gety() );
			if( dai1 == dai2 && rong1 == rong2 )
			{
				return true;	
			}
			else if( dai1 == rong2 && dai2 == rong1 )
			{
				return true;
			}
			return false;
		}
		bool check(Toado A)
		{
			float x = max(TT.getx(), DP.getx());
			float y = min(TT.getx(), DP.getx());
			float z = max(TT.gety(), DP.gety());
			float t = min(TT.gety(), DP.gety());
			if( A.getx()>y && A.getx()<x && A.gety()>t && A.gety()<z )
			{
				return true;
			}
			return false;
		}
		friend ostream &operator <<(ostream &out, const Hinhchunhat &c)
		{
			cout<<"Toa do diem tren trai: ("<<c.TT.getx()<<','<<c.TT.gety()<<')'<<endl;
			cout<<"Toa do diem duoi phai: ("<<c.DP.getx()<<','<<c.DP.gety()<<')'<<endl;
			return out;
		}
		friend istream &operator >>(istream &in, Hinhchunhat &c)
		{
			float a,b;
			cout<<"Toa do trai tren: "; in>>a>>b;
			c.TT.set(a,b);
			cout<<"Toa do phai duoi: "; in>>a>>b;
			c.DP.set(a,b);
			return in;
		}

};	
#endif

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#define ll long long
using namespace std;
class Phanso
{
	private:
		int tu, mau;
	public:
		Phanso()
		{
			tu=0;
			mau=1;
		}
		void set();
		void show();
		Phanso cong(Phanso a, Phanso b);
		Phanso tru(Phanso a, Phanso b);
		Phanso nhan(Phanso a, Phanso b);
		Phanso chia(Phanso a, Phanso b);
		~Phanso()
		{
			tu=0;
			mau=1;
		}
};
void Phanso::set()
{
	cout<<"Nhap tu so: ";
	cin>>tu;
	cout<<'\n';
	cout<<"Nhap mau so: ";
	cin>>mau;
	cout<<'\n';
}
void Phanso::show()
{
	cout<<tu<<'/'<<mau<<'\n';
}
Phanso Phanso::cong(Phanso a, Phanso b)
{
	Phanso c;
	c.tu=a.tu*b.mau+a.mau*b.tu;
	c.mau=a.mau*b.mau;
	return c;
}

Phanso Phanso::tru(Phanso a, Phanso b)
{
	Phanso c;
	c.tu=a.tu*b.mau-a.mau*b.tu;
	c.mau=a.mau*b.mau;
	return c;
}

Phanso Phanso::nhan(Phanso a, Phanso b)
{
	Phanso c;
	c.tu=a.tu*b.tu;
	c.mau=a.mau*b.mau;
	return c;
}

Phanso Phanso::chia(Phanso a, Phanso b)
{
	Phanso c;
	c.tu=a.tu*b.mau;
	c.mau=a.mau*b.tu;
	return c;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	Phanso a, b;
	a.set();
	b.set();
	Phanso c=c.cong(a,b);
	c.show();
	Phanso t=t.tru(a,b);
	t.show();
	Phanso nh=nh.nhan(a,b);
	nh.show();
	Phanso ch=ch.chia(a,b);
	ch.show();
	
	
}

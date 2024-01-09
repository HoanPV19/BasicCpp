#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}
class PhanSo
{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau);
		friend ostream& operator << (ostream&, PhanSo);
		friend istream& operator >> (istream&, PhanSo&);
		void rutgon();
		
};
PhanSo::PhanSo(long long a,long long b)
{
	tu=a;
	mau=b;
}
void PhanSo::rutgon()
{
	long long k=gcd(tu,mau);
	tu=tu/k;
	mau=mau/k;
}
ostream& operator << (ostream& out,PhanSo p)
{
	out<<p.tu<<"/"<<p.mau<<endl;
	return out;
}
istream& operator >> (istream& in, PhanSo &p)
{
	in>>p.tu>>p.mau;
	return in;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
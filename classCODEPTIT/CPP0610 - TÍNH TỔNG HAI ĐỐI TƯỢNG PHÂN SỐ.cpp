#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}
long long lcm(long long a, long long b)
{
	return a/gcd(a,b)*b;
}
class PhanSo
{
	public:
		long long tu,mau;
		PhanSo(long long tu, long long mau);
		friend istream& operator >> (istream&, PhanSo&);
		friend ostream& operator << (ostream&, PhanSo);
		friend PhanSo operator + (PhanSo, PhanSo);
		friend void rutgon(PhanSo&);
};
void rutgon(PhanSo &a)
{
	long long g=gcd(a.tu,a.mau);
	a.tu/=g;
	a.mau/=g;
}
PhanSo::PhanSo(long long tu, long long mau)
{
	this->tu = tu;
	this->mau =mau;
}
istream& operator >> (istream& in, PhanSo &a)
{
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator << (ostream& out, PhanSo a)
{
	out<<a.tu<<"/"<<a.mau<<endl;
	return out;
}
PhanSo operator + (PhanSo a, PhanSo b)
{
	PhanSo tong(1,1);
	long long k=lcm(a.mau,b.mau);
	tong.mau=k;
	tong.tu=k/a.mau*a.tu + k/b.mau*b.tu;
	rutgon(tong);
	return tong;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
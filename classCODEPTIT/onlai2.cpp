#include <bits/stdc++.h>
using namespace std;
class VDV
{
	private:
		string hoten, monthi;
		int tuoi, cannang, chieucao;
	public:
		VDV()
		{
			hoten="";
			monthi="";
			tuoi=0;
			cannang=0;
		}
		VDV(string hoten, int tuoi, string monthi, float cannang)
		{
			this->hoten=hoten;
			this->tuoi=tuoi;
			this->monthi=monthi;
			this->cannang=cannang;
		}
		~VDV()
		{
			hoten="";
			monthi="";
			tuoi=0;
			cannang=0;
		}
		friend istream& operator >> (istream&, VDV&);
		friend ostream& operator << (ostream&, VDV);
		friend bool cmp(VDV, VDV);
};
istream &operator >> (istream &in, VDV &a)
{
	cin.ignore();
	getline(in,a.hoten);
	getline(in, a.monthi);
	in>>a.tuoi>>a.cannang>>a.chieucao;
}
ostream &operator << (ostream &out, VDV a)
{
	out<<a.hoten<<"\n"<<a.tuoi<<'\n'<<a.monthi<<'\n'<<a.cannang<<'\n'<<a.chieucao<<'\n';
}
bool cmp(VDV a, VDV b)
{
	return a.cannang<b.cannang;
}
int main()
{
	int n;
	cin>>n;
	VDV A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	sort(A,A+n,cmp);
	for(int i=0;i<n;i++)
	{
		cout<<A[i];
	}
}
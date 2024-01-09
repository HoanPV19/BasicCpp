#include <bits/stdc++.h>
using namespace std;

class cty
{
	private:
		string ma, ten;
		int sl;
	public:
		string getma()
		{
			 return ma;
		}
		int getsl()
		{
			return sl;
		}
	friend istream& operator >> (istream&, cty&);
	friend ostream& operator << (ostream&, cty);
};
istream& operator >> (istream& in, cty &a)
{
	scanf("\n");
	getline(in,a.ma);
	getline(in,a.ten);
	in>>a.sl;
	return in;
}
ostream& operator << (ostream& out, cty a)
{
	cout<<a.ma<<" "<<a.ten<<" "<<a.sl<<endl;
	return out;
}
bool cmp(cty a, cty b)
{
	if(a.getsl()==b.getsl()) return a.getma()<b.getma();
	return a.getsl()>b.getsl();
}
int main()
{
	cty ds[1000];
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	cin>>ds[i];
	sort(ds, ds+N,cmp);
	for(int i=0;i<N;i++)
	cout<<ds[i];
}
	
	
	
	

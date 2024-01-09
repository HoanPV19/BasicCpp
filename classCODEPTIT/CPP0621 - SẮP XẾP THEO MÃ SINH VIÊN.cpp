#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
	public:
		string ten,msv,lop,mail;
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
};

istream& operator >> (istream& in, SinhVien &a)
{
	scanf("\n");
	getline(in,a.msv);
	getline(in,a.ten);
	getline(in,a.lop);
	getline(in,a.mail);
	return in;
}
ostream& operator << (ostream& out, SinhVien a)
{
	out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail<<endl;
	return out;
}
bool cmp(SinhVien a, SinhVien b)
{
	return a.msv<b.msv;
}
int main(){
    SinhVien ds[1001],x;
    int N=0;
    while(cin>>x)
    {
    	ds[N++]=x;
	}
    sort(ds,ds+N,cmp);
    for(int i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
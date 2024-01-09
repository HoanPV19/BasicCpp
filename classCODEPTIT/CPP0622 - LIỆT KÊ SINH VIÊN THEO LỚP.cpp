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
    SinhVien ds[1001];
    int N=0,T=0;
    cin>>N;
    for(int i=0;i<N;i++){
       cin >> ds[i];
    }
    cin>>T;
    while(T--)
    {
    	string lp;
    	cin>>lp;
    	cout<<"DANH SACH SINH VIEN LOP "<<lp<<":"<<endl;
    	for(int i=0;i<N;i++)
    	if(ds[i].lop==lp) cout<<ds[i];
	}
    return 0;
}
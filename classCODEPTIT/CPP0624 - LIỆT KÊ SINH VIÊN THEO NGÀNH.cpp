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
    string n[5]={"Cong nghe thong tin", "Ke toan", "An toan thong tin", "Vien thong", "Dien tu"};
    int N=0,T=0;
    cin>>N;
    for(int i=0;i<N;i++){
       cin >> ds[i];
    }
    cin>>T;
    while(T--)
    {
    	scanf("\n");
    	string nganh,xuat;
    	string kt;
    	getline(cin,nganh);
    	if(nganh==n[0]) 
    	{
    		kt="CN";
    		xuat="CONG NGHE THONG TIN";
		}
		else if(nganh==n[1]) 
		{
			kt="KT";
			xuat="KE TOAN";
		}
		else if(nganh==n[2]) 
		{
			kt="AT";
			xuat="AN TOAN THONG TIN";
		}
		else if(nganh==n[3]) 
		{
			kt="VT";
			xuat="VIEN THONG";
		}
		else 
		{
			kt="DT";
			xuat="DIEN TU";
		}
    	cout<<"DANH SACH SINH VIEN NGANH "<<xuat<<":"<<endl;
    	for(int i=0;i<N;i++)
    	{
    		if(kt=="CN"||kt=="AT")
    		{
    			if(ds[i].msv.substr(5,2)==kt&&ds[i].lop[0]!='E') cout<<ds[i];
			}
			else if(ds[i].msv.substr(5,2)==kt) cout<<ds[i];
		}
	}
    return 0;
}
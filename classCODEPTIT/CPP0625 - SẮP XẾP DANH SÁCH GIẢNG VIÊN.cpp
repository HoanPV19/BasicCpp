#include <bits/stdc++.h>
using namespace std;

int stt=1;
class SinhVien
{
	public:
		string ten,msv,mon,t;
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
};
string mm(string s)
{
	string k="";
	stringstream ss(s);
	string tmp;
	while(ss>>tmp)
	{
		k+=toupper(tmp[0]);
	}
	return k;
}
istream& operator >> (istream& in, SinhVien &a)
{
	scanf("\n");
	getline(in,a.ten);
	getline(in,a.mon);
	a.mon=mm(a.mon);
	a.msv="GV"+string(2-to_string(stt).size(),'0')+to_string(stt);
	++stt;
	stringstream ss(a.ten);
	string tmp;
	while(ss>>tmp)
	a.t=tmp;
	return in;
}

ostream& operator << (ostream& out, SinhVien a)
{
	out<<a.msv<<" "<<a.ten<<" "<<a.mon<<endl;
	return out;
}
bool cmp(SinhVien a, SinhVien b)
{
	if(a.t==b.t) return a.msv<b.msv;
	return a.t<b.t;
}
int main(){
    SinhVien ds[1001];
    string n[5]={"Cong nghe thong tin", "Ke toan", "An toan thong tin", "Vien thong", "Dien tu"};
    int N=0,T=0;
    cin>>N;
    for(int i=0;i<N;i++)
    	cin >> ds[i];
    sort(ds,ds+N,cmp);
    for(int i=0;i<N;i++)
    	cout<<ds[i];
    return 0;
}
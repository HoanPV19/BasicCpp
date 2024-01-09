#include <bits/stdc++.h>
using namespace std;

int stt=1;
class SinhVien
{
	public:
		string ten,msv,mon;
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
	return in;
}

ostream& operator << (ostream& out, SinhVien  a)
{
	out<<a.msv<<" "<<a.ten<<" "<<a.mon<<endl;
	return out;
}

int main(){
    SinhVien ds[1001];
    int N=0,T=0;
    cin>>N;
    for(int i=0;i<N;i++)
    	cin >> ds[i];
    cin>>T;
    while(T--)
    {
    	string mon;
    	scanf("\n");
    	getline(cin,mon);
    	mon=mm(mon);
    	cout<<"DANH SACH GIANG VIEN BO MON "<<mon<<":\n";
    	for(int i=0;i<N;i++)
    	{
    		if(ds[i].mon==mon) cout<<ds[i];
		}
	}
    return 0;
}
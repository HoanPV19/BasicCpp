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
	a.msv="GV"+to_string(stt);
	if(stt<10) a.msv.insert(2,"0");
	++stt;
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
    scanf("\n");
    while(T--)
    {
    	string s;
    	cin>>s;
    	cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
    	transform(s.begin(), s.end(), s.begin(), ::tolower);
    	for(int i=0;i<N;i++)
    	{
    		string k=ds[i].ten;
    		transform(k.begin(), k.end(), k.begin(), ::tolower);
    		size_t pos = k.find(s);
    		if(pos!=-1) cout<<ds[i];
		}
	}
    return 0;
}
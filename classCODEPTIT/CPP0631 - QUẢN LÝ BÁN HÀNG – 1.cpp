#include <bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
map<string, KhachHang> KH;
map<string, MatHang> MH;
int ttk=1,tth=1,ttd=1;
class KhachHang
{
	public:
		string ma,ten,gt,ns,dc;
	
	friend istream& operator >> (istream&, KhachHang&);
	friend class HoaDon;
};
istream& operator >> (istream& in, KhachHang &a)
{
	scanf("\n");
	getline(in,a.ten);
	getline(in,a.gt);
	getline(in,a.ns);
	getline(in,a.dc);
	a.ma="KH"+string(3-to_string(ttk).size(),'0')+to_string(ttk);
	KH[a.ma]=a;
	++ttk;
	return in;
}
class MatHang
{
	public:
		string ma,ten,dv;
		long long mua,ban;
	friend istream& operator >> (istream&, MatHang&);
	friend class HoaDon;
};
istream& operator >> (istream& in, MatHang &a)
{
	scanf("\n");
	getline(in,a.ten);
	getline(in,a.dv);
	cin>>a.mua>>a.ban;
	a.ma="MH"+string(3-to_string(tth).size(),'0')+to_string(tth);
	MH[a.ma]=a;
	++tth;
	return in;
};
class HoaDon
{
	public:
		string mad, mak, mah;
		long long sl;
		friend istream& operator >> (istream&, HoaDon&);
		friend ostream& operator << (ostream&, HoaDon);
	
};
istream& operator >> (istream& in, HoaDon &a)
{
	in>>a.mak>>a.mah>>a.sl;
	a.mad="HD"+string(3-to_string(ttd).size(),'0')+to_string(ttd);
	++ttd;
	return in;
}
ostream& operator << (ostream& out, HoaDon a)
{
	cout<<a.mad<<" "<<KH[a.mak].ten<<" "<<KH[a.mak].dc<<" "<<MH[a.mah].ten<<" "<<MH[a.mah].dv<<" "<<MH[a.mah].mua<<" "<<MH[a.mah].ban<<" "<<a.sl<<" "<<a.sl*MH[a.mah].ban<<endl;
	return out;
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
	
	
	

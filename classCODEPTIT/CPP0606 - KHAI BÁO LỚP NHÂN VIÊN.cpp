#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
	public:
		string mnv,ten,gt,ns,dc,mst,khd;
	
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&, NhanVien);
};
istream& operator >> (istream& in, NhanVien &a)
{
	a.mnv="00001";
	getline(in,a.ten);
	in>>a.gt>>a.ns;
	in.ignore();
	getline(in,a.dc);
	in>>a.mst>>a.khd;
	return in;
}
ostream& operator << (ostream& out, NhanVien a)
{
	out<<a.mnv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.khd<<endl;
	return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
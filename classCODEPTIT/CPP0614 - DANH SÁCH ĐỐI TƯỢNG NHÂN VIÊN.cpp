#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
	public:
		string msv,ten,gt,mst,dc,ns,nk;
		static int dem;
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&, NhanVien);
};
int NhanVien::dem=1;
istream& operator >> (istream& in, NhanVien &a)
{
	a.msv= string(5-to_string(a.dem).length(),'0') + to_string(a.dem);
	scanf("\n");
	getline(in,a.ten);
	in>>a.gt>>a.ns;
	scanf("\n");
	getline(in,a.dc);
	in>>a.mst>>a.nk;
	a.dem++;
	return in;
}
ostream& operator << (ostream& out, NhanVien a)
{
	out<<a.msv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" ";
	out<<a.mst<<" "<<a.nk<<endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
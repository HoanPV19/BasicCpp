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
	if(a.lop==b.lop)
	return a.msv<b.msv;
	return a.lop<b.lop;
}
int main(){
    SinhVien ds[1001];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sort(ds,ds+N,cmp);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
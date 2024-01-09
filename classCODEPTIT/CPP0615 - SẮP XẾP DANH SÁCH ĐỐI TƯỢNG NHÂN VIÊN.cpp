#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
	public:
		string msv,ten,gt,mst,dc,ns,nk;
		int ngay, thang, nam;
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
	getline(in,a.gt);
	scanf("%d/%d/%d\n", &a.thang, &a.ngay, &a.nam);
	getline(in,a.dc);
	getline(in,a.mst);
	getline(in,a.nk);
	a.dem++;
	return in;
}
ostream& operator << (ostream& out, NhanVien a)
{
	out<<a.msv<<" "<<a.ten<<" "<<a.gt<<" ";
	printf("%.2d/%.2d/%.4d ", a.thang, a.ngay, a.nam);
	out<<" "<<a.dc<<" "<<a.mst<<" "<<a.nk<<endl;
	return out;
}
bool cmp(NhanVien a, NhanVien b) {  
    if (a.nam < b.nam) return 1;
    if (a.nam == b.nam) {
        if (a.thang < b.thang) return 1;
        if (a.thang == b.thang)  {
            if (a.ngay < b.ngay) return 1;
        }
    }
    return 0;
}
void sapxep(NhanVien ds[], int N)
{
	sort(ds,ds+N,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
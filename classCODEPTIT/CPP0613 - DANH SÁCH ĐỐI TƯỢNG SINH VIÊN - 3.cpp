#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
	public:
		string ten,msv,lop,ns;
		float gpa;
		static int dem;
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
};
int SinhVien::dem=1;
istream& operator >> (istream& in, SinhVien &a)
{
	a.msv="B20DCCN" + string(3-to_string(a.dem).length(),'0') + to_string(a.dem);
	scanf("\n");
	getline(in,a.ten);
	in>>a.lop>>a.ns>>a.gpa;
	string tmp,ok="";
	stringstream ss(a.ten);
	while(ss>>tmp)
	{
		tmp[0]=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++)
		tmp[i]=tolower(tmp[i]);
		ok+=tmp+" ";
	}
	ok.pop_back();
	a.ten=ok;
	if(a.ns[1]=='/') a.ns.insert(0,"0");
	if(a.ns[4]=='/') a.ns.insert(3,"0");
	a.dem++;
	return in;
}
ostream& operator << (ostream& out, SinhVien a)
{
	out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" ";
	out<<fixed<<setprecision(2)<<a.gpa<<endl;
	return out;
}
bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
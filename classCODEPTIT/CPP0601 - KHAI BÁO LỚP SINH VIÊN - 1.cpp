#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
	private:
		string msv="B20DCCN001",ten,lop,ns;
		double gpa;
	public:
		void nhap();
		void xuat();
		
};
void SinhVien::nhap()
{
	getline(cin,ten);
	cin>>lop;
	cin>>ns;
	if(ns[1]=='/') ns.insert(0,"0");
	if(ns[4]=='/') ns.insert(3,"0");
	cin>>gpa;
}
void SinhVien::xuat()
{
	cout<<msv<<" "<<ten<<" "<<lop<<" "<<ns<<fixed<<setprecision(2)<<" "<<gpa<<endl;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
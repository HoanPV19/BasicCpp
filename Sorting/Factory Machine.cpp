// https://codeforces.com/gym/102961/problem/U
// sử dụng chặt nhị phân tìm kiếm time bé nhất thỏa mãn đk có thể tạo ra >= t sản phẩm;
#include <bits/stdc++.h>
using namespace std;
long long t, n;
bool check(long long T, int a[])
{
	long long cnt=0;
	for(int i=0;i<n;i++)
	{
		cnt+=T/a[i];
		if(cnt>=t) return true;
	}
return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long l=1, r=1e18;
	while(l<=r)
	{
		long long mid=l+(r-l)/2;
		if(check(mid,a)) r=mid-1;
		else l=mid+1;
	}
	cout<<l;
}

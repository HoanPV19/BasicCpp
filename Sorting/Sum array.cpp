// https://codeforces.com/gym/102961/problem/ZA
#include <bits/stdc++.h>
using namespace std;
bool Bs(int l, int r, long long a[], long long x)
{
	while(l<=r)
	{
		if(a[l]>x) return false;
		int mid=(l+r)/2;
		if(a[mid]==x) return true;
		else if(a[mid]<x) l=mid+1;
		else r=mid-1;
	}
return false;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n,x;
	cin>>n>>x;
	long long a[n+1];
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	int kq=0;
	for(int i=0;i<n;i++)
	{
		if(Bs(i+1,n,a,a[i]+x)) ++kq;
	}
	cout<<kq;
	
}

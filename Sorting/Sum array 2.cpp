// https://codeforces.com/gym/102961/problem/ZA
#include <bits/stdc++.h>
using namespace std;

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
	long long kq=0;
	map <long long, int> mp;
	mp[0]=1;
	for(int i=1;i<=n;i++)
	{
		kq+=mp[a[i]-x];
		mp[a[i]]++;
	}
	cout<<kq;
	
}

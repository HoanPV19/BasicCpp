// https://codeforces.com/gym/102961/problem/ZC
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin>>n;
	long long a[n+1];
	a[0]=0;
	map <long long , int> mp;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	long long kq=0;
	int r;
	mp[0]=1;
	for(int i=1;i<=n;i++)
	{
		r=a[i]%n;
		if(r>=0)
		{
			kq+=mp[r]+mp[r-n];
		}
		else
		{
			kq+=mp[r]+mp[n+r];
		}
		mp[a[i]%n]++;
	}
	cout<<kq;

}
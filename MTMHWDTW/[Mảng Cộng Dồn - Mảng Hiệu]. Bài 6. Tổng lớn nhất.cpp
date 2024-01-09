#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	int a[n+1];
	int ts[n+1]={};
	a[0]=0;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1, greater<int>());
	while(q--)
	{
		int l, r;
		cin>>l>>r;
		ts[l]+=1;
		ts[r+1]-=1;
	}
	for(int i=1;i<=n;i++)
	{
		ts[i]+=ts[i-1];
	}
	sort(ts+1,ts+n+1, greater<int>());
	ll sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=ts[i]*a[i];
	}
	cout<<sum;

}

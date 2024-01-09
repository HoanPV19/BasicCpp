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
	int a[n+1], b[n+1];
	a[0]=0, b[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i]-a[i-1];
	}
	int l, r, k;
	while(q--)
	{
		cin>>l>>r>>k;
		b[l+1]+=k;
		b[r+2]-=k;
	}
	for(int i=1;i<=n;i++)
	{
		b[i]+=b[i-1];
		cout<<b[i]<<" ";
	}
		
}

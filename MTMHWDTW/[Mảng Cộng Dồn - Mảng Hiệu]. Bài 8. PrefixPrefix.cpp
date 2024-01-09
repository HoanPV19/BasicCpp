#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
struct qr
{
	int l, r, D;
};
int main()
{
	int n, m, k;
	cin>>n>>m>>k;
	ll a[n+1], b[n+2];
	vector <struct qr> M(m+1);
	M.push_back({0,0,0});
	a[0]=0, b[0]=0, b[n+1]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i]-a[i-1];
	}
	for(int i=1;i<=m;i++)
		cin>>M[i].l>>M[i].r>>M[i].D;
	int x, y;
	for(int i=1;i<=k;i++)
	{
		cin>>x>>y;
		for(int j=x;j<=y;j++)
		{
			b[M[j].l]+=M[j].D;
			b[M[j].r+1]-=M[j].D;
		}
	}
	for(int i=1;i<=n;i++)
	{
		b[i]+=b[i-1];
		cout<<b[i]<<" ";
	}
}

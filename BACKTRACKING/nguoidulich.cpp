#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int duong[105]={};
int smin=1e9, dmin=1e9;
int used[105]={};
int n;
void BT(int sum, int k, int cnt)
{
	if(cnt==n)
		smin=min(smin,sum+a[k][1]);
	for(int i=2;i<=n;i++)
	{
		if(!used[i]&&i!=k)
		{
			sum+=a[k][i];
			used[i]=true;
			if(sum+dmin*(n-i+1)<smin)
				BT(sum,i,cnt+1);
			sum-=a[k][i];
			used[i]=false;
		}
	}
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	used[i]=false;
    	for(int j=1;j<=n;j++)
    	{
    		cin>>a[i][j];
    		dmin=min(dmin,a[i][j]);
		}
	}
	BT(0, 1, 1);
    cout<<smin<<'\n';
}

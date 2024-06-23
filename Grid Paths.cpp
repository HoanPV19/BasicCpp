#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e6;
const ll mod = 1e9+7;

int main()
{
	int n;
	cin>>n;
	char a[n+1][n+1];
	ll dp[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		cin>>a[i][j];
	}
	
	memset(dp,0,sizeof(dp));
	if(a[1][1]=='.')
		dp[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1&&j==1)
				continue;
			if(a[i][j]=='.')
				dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
		}
	}
	cout<<dp[n][n];
}

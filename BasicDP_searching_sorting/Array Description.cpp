#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;

int main()
{
	int n, m;
	cin>>n>>m;
	int a[maxX+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	ll dp[maxX+1][maxN+1];
	memset(dp,0,sizeof(dp));
	if(a[1])
		dp[1][a[1]]=1;
	else
		for(int i=1;i<=m;i++)
			dp[1][i]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=dp[i-1][j];
			if(j!=1)
				dp[i][j]+=dp[i-1][j-1];
			if(j!=m)
				dp[i][j]+=dp[i-1][j+1];
			dp[i][j]%=mod;
		}
		if(a[i])
			for(int j=0;j<=m;j++)
				if(j!=a[i])
					dp[i][j]=0;
	}
	ll ans=0;
	for(int i=1;i<=m;i++)
		ans=(ans+dp[n][i])%mod;
	cout<<ans;
}

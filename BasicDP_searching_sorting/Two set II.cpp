#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;

int main()
{
	int n;
	cin>>n;
	if(n*(n+1)%4!=0)
	{
		cout<<"0\n";
		return 0;
	}
	
	ll dp[n+1][n*(n+1)/4+1];
	memset(dp,0,sizeof(dp));
	dp[1][1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n*(n+1)/4;j++)
		{
			dp[i][j]=dp[i-1][j]%mod;
			if(j>=i)
				dp[i][j]=(dp[i][j]+dp[i-1][j-i])%mod;
		}
	}
	cout<<dp[n][n*(n+1)/4];
	
	
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
int main()
{  
	int n;
	cin>>n;
	char a[n+1][n+1];
	ll dp[n+1][n+1];
	dp[1][1]=1;
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
		{
			dp[i][j]=0;
			if(i==0||j==0)
				continue;
			else
				cin>>a[i][j];
			
		}
	if(a[1][1]=='.')
		dp[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='.')
				dp[i][j]=(dp[i][j]+dp[i-1][j]+dp[i][j-1])%mod;
		}
	}
	cout<<dp[n][n];
}

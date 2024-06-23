#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;
int dp[505][505];
int sl(int n, int m)
{
	if(dp[n][m]!=-1)
		return dp[n][m];
	if(n==m)
	{
		return 0;
	}
	int ans=INT_MAX;
	for(int i=1;i<n;i++)
		ans=min(ans,sl(n-i,m)+sl(i,m)+1);
	for(int i=1;i<m;i++)
		ans=min(ans,sl(n,m-i)+sl(n,i)+1);
	dp[n][m]=ans;
	return dp[n][m];		
}
int main()
{
	int a,b;
	cin>>a>>b;
	memset(dp,-1,sizeof(dp));
	cout<<sl(a,b);
	
}

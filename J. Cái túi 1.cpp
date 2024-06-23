#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;

int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n, w;
	cin>>n>>w;
	ll dp[n+1][w+1];
	vector <pair <int, int>> wc(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>wc[i].first>>wc[i].second;
	}
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(j>=wc[i].first)
			{
				dp[i][j]=max(dp[i-1][j-wc[i].first]+wc[i].second,dp[i-1][j]);
			}
			else
				dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][w];
	
}

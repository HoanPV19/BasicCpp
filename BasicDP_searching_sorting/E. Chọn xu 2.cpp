#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
int main()
{  
	int n, s;
	cin>>n>>s;
	int xu[n+1];
	for(int i=1;i<=n;i++)
		cin>>xu[i];
	sort(xu+1, xu+n+1);
	ll dp[s+1];
	
	memset(dp, 0, sizeof(dp));
	dp[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=xu[i];j<=s;j++)
		{
			dp[j]=(dp[j]+dp[j-xu[i]])%mod;
		}
	}
	cout<<dp[s];
}

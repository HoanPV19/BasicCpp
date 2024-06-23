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
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0]=0;
	for(int i=1;i<=n;i++)
	{
		string a=to_string(i);
		int ma=0;
		for(int j=0;j<a.size();j++)
		{
			ma=max(ma,a[j]-'0');
		}
		dp[i]=dp[i-ma]+1;
	}
	cout<<dp[n];
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;

int main()
{
	string a,b;
	cin>>a>>b;
	int n=(int)a.length(), m=(int)b.length();
	int dp[n+1][m+1];
	// dp[i][j] so cach bien doi a(0,i-1)->b(0,j-1)
	// dp[0][j] a(0,0)->b(0,j-1):j
	for(int i=0;i<=n;i++)
		dp[i][0]=i;
	for(int i=0;i<=m;i++)
		dp[0][i]=i;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=min({dp[i][j-1]+1,dp[i-1][j]+1,dp[i-1][j-1]+1});
		}
	}
	cout<<dp[n][m];
}

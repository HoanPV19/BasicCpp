#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;

int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	string a,b;
	cin>>a>>b;
	int la=a.size(), lb=b.size();
	int dp[la+1][lb+1];
	memset(dp,0,sizeof(dp)); 
	int res=0;
	for(int i=1;i<=la;i++)
	{
		for(int j=1;j<=lb;j++)
		{
			if(a[i-1]==b[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		
		}
	}
	cout<<dp[la][lb];
}

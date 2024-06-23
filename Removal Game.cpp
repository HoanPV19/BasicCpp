#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;

int main()
{
	int n;
	ll sum=0;
	cin>>n;
	int a[n];
	ll dp[n][n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		dp[i][i]=a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			if(i>=j)
				continue;
			if(i<n-1)
				dp[i][j]=a[i]-dp[i+1][j];
			if(j>0)
				dp[i][j]=max(dp[i][j],a[j]-dp[i][j-1]);
		}
	}
	cout<<(sum+dp[0][n-1])/2;
	
	
}

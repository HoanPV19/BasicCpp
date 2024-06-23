#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e6;
const ll mod = 1e9+7;
 
int main()
{
	int n, x;
	cin>>n>>x;
	int a[n];
	vector <ll> dp(x+1,0);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	dp[0]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=x-a[i];j++)
		{
			dp[j+a[i]]=(dp[j]+dp[j+a[i]])%mod;
		}
	}
	cout<<dp[x];
}

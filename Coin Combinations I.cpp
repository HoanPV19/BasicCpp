#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e6;
const ll MOD = 1e9+7;
 
int n, x, a[maxN];
ll dp[maxX+1];
int main() {
   cin>>n>>x;
   for(int i=0;i<n;i++)
   	{
   		scanf("%d", &a[i]);
	}
	sort(a,a+n);
	dp[0]=1;
	for(int i=a[0];i<=x;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>=a[j])
			{
				dp[i]=(dp[i]+dp[i-a[j]])%MOD;
			}
		}
	}
	cout<<dp[x];

}

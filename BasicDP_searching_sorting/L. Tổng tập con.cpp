#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a+1,a+n+1);
	int dp[sum+1];
	set <int> v;
	memset (dp, 0, sizeof(dp));
	dp[sum]=dp[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=sum;j>=0;j--)
		{
			if(dp[j])
			{
				dp[j+a[i]]=1;
				v.insert(j-a[i]);
			}
		}
	}
	cout<<v.size()<<'\n';
	for(auto x:v)
		cout<<x<<" ";
	
	
}

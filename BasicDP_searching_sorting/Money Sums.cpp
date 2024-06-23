#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;

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
	memset(dp,0,sizeof(dp));

	set <int> s;
	dp[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=sum;j>=a[i];j--)
		{
			if(dp[j-a[i]])
				dp[j]=1;
		}
	}
	for(int i=1;i<=sum;i++)
		if(dp[i])
			s.insert(i);
	cout<<s.size()<<'\n';
	for(auto x:s)
		cout<<x<<' ';
	
}

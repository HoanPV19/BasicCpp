#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
int main() {

   int n, x;
   cin>>n>>x;
   int a[n];
   vector <int> dp(x+1,1e9);
   for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
	}
	dp[0]=0;
	for(int i=1;i<=x;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>=a[j])
			{
				// so xu tao ra dong tien hien tai voi them xu dang xet vao tong truoc no
				dp[i]=min(dp[i],dp[i-a[j]]+1);
			}
		}
	}
	if(dp[x]==1e9)
		cout<<"-1";
	else
		cout<<dp[x];

}

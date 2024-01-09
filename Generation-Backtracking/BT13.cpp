#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, a[10][10],cot[100], c1[100],c2[100];
ll ans=0, sum=0;
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(cot[j]==0&&c1[i-j+n]==0&&c2[i+j-1]==0)
		{
			sum+=a[i][j];
			cot[j] = 1;
			c1[i-j+n] = 1;
			c2[i+j-1] = 1;
			if(i==n) 
				ans=max(sum, ans);
			else Try(i+1);
			cot[j] = 0;
			c1[i-j+n] = 0;
			c2[i+j-1] = 0;
			sum-=a[i][j];
		}
	}
}
void pro()
{
	n=8;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
	ans=0;
	sum=0;
	memset(cot, 0, sizeof(cot));
	memset(c1, 0, sizeof(c1));
	memset(c2, 0, sizeof(c2));
	Try(1);
	cout<<ans;
}
int main()
{  
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin>>T;
	while(T--)
		pro();
	
}






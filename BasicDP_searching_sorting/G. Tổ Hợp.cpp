#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
ll C[1001][1001];
void sang()
{
	for(int i=0;i<=1000;i++)
	{
		C[i][0]=C[i][i]=1;
	}
	for(int n=1;n<=1000;n++)
	{
		for(int k=1;k<n;k++)
		{
			C[n][k]=(C[n-1][k-1]+C[n-1][k])%mod;
		}
	}
}
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	sang();
	int t;
	cin>>t;
	int n,k;
	while(t--)
	{
		cin>>n>>k;
		cout<<C[n][k]<<'\n';
	}
}

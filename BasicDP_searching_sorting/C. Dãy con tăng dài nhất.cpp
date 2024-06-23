#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
int main()
{  
	int n;
	cin>>n;
	int len[n+1];
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		len[i]=1;
	}
	int res=1;
	for(int i=1;i<=n;i++)
	{
		int ma=1;
		for(int j=1;j<i;j++)
		{	
			if(a[i]>a[j])
			{
				ma=max(len[j]+1,ma);
			}
		}
		len[i]=ma;
		res=max(len[i],res);
	}
	cout<<res<<'\n';
	
}

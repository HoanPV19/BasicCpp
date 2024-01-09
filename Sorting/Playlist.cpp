// https://codeforces.com/gym/102961/problem/J
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	map <int,int > mp;
	int n,x,l=1;
	cin>>n;
	int ans=1;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(mp[x])
		{
			ans=max(ans, i-l);
			l=max(l, mp[x]+1);
			mp[x]=i;
		}
		else 
		{
			ans=max(ans, i-l+1);
			mp[x]=i;
		}
	}
	cout<<ans;
}

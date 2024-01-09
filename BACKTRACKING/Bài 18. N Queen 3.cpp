#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    int x;
    map <int, ll> mp; 
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	x%=28;
    	++mp[x];
	}
	ll s=0;
	for(auto y:mp)
	{
		int tmp=min(mp[28-y.first],mp[y.first]);
		s+=tmp*(tmp-1)/2;
		mp[28-y.first]-=tmp;
		mp[y.first]-=tmp;
	}
	cout<<s<<'\n';
}

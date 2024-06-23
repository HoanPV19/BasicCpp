#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	ll sum=n*(n+1)/2;
	if(sum%2)
	{
		cout<<"NO\n";
		return 0;
	}
	ll scheck=sum/2;
	vector<ll> okay1;
	vector<ll> okay2;
	for(ll i=n;i>=1;i--)
	{
		if(i<=scheck)
		{
			okay1.push_back(i);
			scheck-=i;
		}
		else
			okay2.push_back(i);
	}
		cout<<"YES\n";
		cout<<okay1.size()<<'\n';
		for(int i=0;i<okay1.size();i++)
			cout<<okay1[i]<<" ";
		cout<<'\n';
		cout<<okay2.size()<<'\n';
		for(int i=0;i<okay2.size();i++)
			cout<<okay2[i]<<" ";
}

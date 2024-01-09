#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int N;
	ll k;
    cin>>N>>k;
    ll a[N+1];
    a[0]=0;
    for(int i=1;i<=N;i++)
    	cin>>a[i];
	multiset <ll> se;
	int l=1;
	ll len=0;
	for(int r=1;r<=N;r++)
	{
		se.insert(a[r]);
		while((*se.rbegin()-*se.begin())>k)
		{
			auto it=se.find(a[l]);
			se.erase(it);
			++l;
		}
		len+=r-l+1;
	}
	cout<<len<<'\n';
}

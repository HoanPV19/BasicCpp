#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int N;
    ll s;
    cin>>N>>s;
    ll a[N+1];
    a[0]=0;
    for(int i=1;i<=N;i++)
    	cin>>a[i];
	ll len=0;
	ll sum=0;
	int l=1, r=1;
	for(int r=1;r<=N;r++)
	{
		sum+=a[r];
		bool ok=false;
		while(sum>=s)
		{
			ok=true;
			sum-=a[l];
			++l;
		}
		while(ok&&sum<s)
		{
			sum+=a[l-1];
			--l;
		}
		if(ok)
			len+=l;
	}
	cout<<len<<'\n';
}

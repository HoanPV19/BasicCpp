#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll N, p;
    cin>>N>>p;
    ll a[N+1];
    for(int i=1;i<=N;i++)
    {
    	cin>>a[i];
    	a[i]+=a[i-1];
	}
   	ll sumse=0;
   	ll l=1;
   	for(ll r=1;r<=N;r++)
   	{
   		while(a[r]-a[l-1]>p)
   			++l;
   		sumse+=1ll*(r-l+2)*(r-l+1)/2;
	}
	cout<<sumse;
}

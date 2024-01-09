#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n,s;
	ll CC=0;
    cin>>n>>s;
    ll w[n+1], c[n+1];
    w[0]=c[0]=0;
    for(int i=1;i<=n;i++)
    {
    	cin>>w[i];
    	w[i]+=w[i-1];
	}
	for(int i=1;i<=n;i++)
    {
    	cin>>c[i];
    	c[i]+=c[i-1];
	}
	int l=1;
	for(int r=1;r<=n;r++)
	{
		while(w[r]-w[l-1]>s)
			++l;
		CC=max(CC, c[r]-c[l-1]);
	}
	cout<<CC<<'\n';
}

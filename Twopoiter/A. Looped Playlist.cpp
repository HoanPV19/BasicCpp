#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll N, p;
    cin>>N>>p;
    ll a[N+1];
    a[0]=0;
    for(int i=1;i<=N;i++)
    {
    	cin>>a[i];
    	a[i]+=a[i-1];
	}
    int start=1;
    ll k=p/a[N];
    if(p%a[N]==0)
    	cout<<"1 "<<k*N<<'\n';
    else
    {
    	int l=1, r=1;
    	ll len=1e18+5;
    	if(p<a[N])
    	{
    		ll s=p;
    		for(r=1;r<=N;r++)
    		{
    			while(a[r]-a[l-1]>p)
    				++l;
    			while(a[r]-a[l-1]<p&&l>1)
    				--l;
    			if(a[r]-a[l-1]>=p&&r-l+1<len)
    			{
    				start=l;
    				len=r-l+1;
				}
			}
			l=1;
			s=a[N]-p;
			for(r=1;r<=N;r++)
			{
				while(a[r]-a[l-1]>s)
					++l;
				if(N-(r-l+1)<len)
				{
					start=r+1;
					if(start>N)
					start=1;
					len=N-(r-l+1);
				}
			}
			cout<<start<<" "<<len<<'\n';
		}
		else
		{
			l=1;
			ll s=a[N]-p%a[N];
			for(r=1;r<=N;r++)
			{
				while(a[r]-a[l-1]>s)
					++l;
				if(N-(r-l+1)<len&&a[r]-a[l-1]<=s)
				{
					start=r+1;
					if(start>N)
					start=1;
					len=N-(r-l+1);
				}
			}
			cout<<start<<" "<<len+k*N<<'\n';
		}
			
	}
}

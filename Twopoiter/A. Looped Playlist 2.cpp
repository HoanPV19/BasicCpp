#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll N, p;
    cin>>N>>p;
    ll a[N+1];
    a[0]=0;
    ll sum=0;
    for(int i=1;i<=N;i++)
    {
    	cin>>a[i];
    	sum+=a[i];
	}
    int start=1;
    ll k=p/sum;
    if(p%sum==0)
    	cout<<"1 "<<k*N<<'\n';
    else
    {
    	ll l=1, r=1;
    	ll len=1e18+5;
    	if(p<sum)
    	{
    		ll SS=0;
    		for(r=1;r<=N;r++)
    		{
    			SS+=a[r];
    			while(SS>=p)
    			{
    				if(r-l+1<len)
    				{
    					start=l;
    					len=r-l+1;
					}
					SS-=a[l];
					++l;
				}
			}
			l=1; SS=0;
			ll s=sum-p;
			for(r=1;r<=N;r++)
			{
				SS+=a[r];
				while(SS>s)
				{
					SS-=a[l];
					++l;
				}
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
			ll s=sum-p%sum, SS=0;
			for(r=1;r<=N;r++)
			{
				SS+=a[r];
				while(SS>s)
				{
					SS-=a[l];
					++l;
				}
				if(N-(r-l+1)<len)
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

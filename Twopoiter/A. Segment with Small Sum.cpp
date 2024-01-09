#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int N;
    ll s;
    cin>>N>>s;
    int a[N+1];
    a[0]=0;
    for(int i=1;i<=N;i++)
    	cin>>a[i];
	int len=0;
	ll sum=0;
	int l=1, r=1;
	for(int r=1;r<=N;r++)
	{
		sum+=a[r];
		while(sum>s)
		{
			sum-=a[l];
			++l;
		}
		len=max(len, r-l+1);
	}
	cout<<len<<'\n';
}

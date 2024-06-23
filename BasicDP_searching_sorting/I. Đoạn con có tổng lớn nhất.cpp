#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;

int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
		ll a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	ll res=-1e9;
	ll sum=-1e9;
	for(int i=1;i<=n;i++)
	{
		if(sum<0)
			sum=a[i];
		else
			sum+=a[i];
			
		res=max(res,sum);
	}
	cout<<res;
}

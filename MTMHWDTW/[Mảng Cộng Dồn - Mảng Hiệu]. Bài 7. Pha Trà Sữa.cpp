#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main()
{
	int n,q,k;
	cin>>n>>k>>q;
	int a[200001];
	int ts[200001]={};
	a[0]=0;
	int l, r;
	int qr=n;
	while(qr--)
	{
		cin>>l>>r;
		++ts[l];
		--ts[r+1];
	}
	for(int i=1;i<=200001;i++)
	{
		ts[i]+=ts[i-1];
		if(ts[i]>=k)
			a[i]=1;
		else
			a[i]=0;
		a[i]+=a[i-1];
	}
	qr=q;
	while(qr--)
	{
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<'\n';
	}
	

}

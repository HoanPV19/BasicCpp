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
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll sumx=0;
	int l, r;
	for(int i=0;i<k;i++)
		sumx+=a[i];
	ll sum=sumx;
	l=0, r=k-1;
	for(int i=k;i<n;i++)
	{
		sum+=a[i];
		sum-=a[i-k];
		if(sum>sumx)
		{
			sumx=sum;
			l=i-k+1;
			r=i;
		}
	}
	cout<<sumx<<'\n';
	for(int i=l;i<=r;i++)
		cout<<a[i]<<" ";
}

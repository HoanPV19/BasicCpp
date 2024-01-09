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
	sort(a,a+n);
	int l,r;
	for(int i=0; i<n-3; i++)
	{
		l=i+1;
		for(int j=n-1;j>=i+3;j--)
		{
			r=j-1;
			while(l<r)
			{
				ll f=a[i]+a[j]+a[l]+a[r];
				if(f==k)
				{
					cout<<"YES\n";
					return 0;
				}
				else if(f>k)
					--r;
				else
					++l;
			}
		}
	}
	cout<<"NO\n";
}

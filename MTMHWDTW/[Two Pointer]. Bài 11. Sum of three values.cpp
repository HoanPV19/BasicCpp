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
	for(int m=1;m<n-1;m++)
	{
		l=m-1, r=n-1;
		while(l<m&&r>m)
		{
			ll f=a[l]+a[m]+a[r];
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
	cout<<"NO\n";
}

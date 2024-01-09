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
	int n, k, ok=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int l=0, r=n-1;
	sort(a, a+n);
	while(l<r)
	{
		if(a[l]+a[r]==k)
		{
			ok=1;
			break;
		}
		else if(a[l]+a[r]<k)
			++l;
		else
			--r;
	}
	if(ok)
		cout<<"YES";
	else
		cout<<"NO";
}

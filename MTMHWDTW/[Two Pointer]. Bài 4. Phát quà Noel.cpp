#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main()
{
	int n, s;
	cin>>n>>s;
	int a[n+1], ans=0;
	int sum=0, l=1;
	for(int r=1;r<=n;r++)
	{
		cin>>a[r];
		sum+=a[r];
		while(sum>s)
			sum-=a[l++];
		ans=max(r-l+1, ans);
	}
	cout<<ans;
}

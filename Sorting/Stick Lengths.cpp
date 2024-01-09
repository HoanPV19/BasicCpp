// https://codeforces.com/gym/102961/problem/I
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;;
	cin>>n;
	long long m=0,mid=0;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	mid=a[n/2];
	for(int i=0;i<n;i++)
	{
		m+=abs(a[i]-mid);
	}
	cout<<m;
}
 
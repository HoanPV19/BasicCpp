
// https://codeforces.com/gym/102961/problem/H
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;;
	cin>>n;
	long long m=-1e9;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m=max(m,a[i]);
	}
	long long tmp=0;
	for(int i=0;i<n;i++)
	{
		tmp+=a[i];
		m=max(m,tmp);
		if(tmp<0) tmp=0;
	}

	cout<<m;
}
 
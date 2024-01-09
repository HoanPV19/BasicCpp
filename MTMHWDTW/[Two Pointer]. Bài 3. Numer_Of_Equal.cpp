#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main()
{
	int n, m, x;
	cin>>n>>m;
	map <int, ll> m1, m2;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		++m1[x];
	}
	for(int i=0;i<m;i++)
	{
		cin>>x;
		++m2[x];
	}
	ll res=0;
	for(auto j:m1)
	{
		res+=j.second*m2[j.first];
	}
	cout<<res;
}

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int a[n], b[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int i=0, j=0;
	while(i<n&&j<m)
	{
		if(b[j]<=a[i])
		{
			cout<<i<<" ";
			++j;
		}
		else 
			++i;
	}
	while(j<m)
	{
		cout<<i<<" ";
		++j;
	}
}

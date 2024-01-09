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
	string a;
	int x, y;
	cin>>a>>x>>y;
	int len=0;
	int hai=0, tam=0, l=0;
	for(int r=0;r<a.size();r++)
	{
		if(a[r]=='8')
			++tam;
		else
			++hai;
		while(hai>x||tam>y)
		{
			if(a[l]=='8')
				--tam;
			else
				--hai;
			++l;
		}
		len=max(len, r-l+1);
	}
	cout<<len;
}

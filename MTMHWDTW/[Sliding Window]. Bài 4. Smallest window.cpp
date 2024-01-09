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
	ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	string s;
	cin>>s;
	int l=0;
	int d[24]={};
	int ld=0;
	for(int i=0;i<s.size();i++)
	{
		++d[s[i]-'a'];
		if(d[s[i]-'a']==1)
			++ld;
	}
	int len=0;
	int dt[24]={};
	int ans=1e9;
	for(int r=0;r<s.size();r++)
	{
		++dt[s[r]-'a'];
		if(dt[s[r]-'a']==1)
			++len;
		while(len==ld)
		{
			ans=min(ans, r-l+1);
			if(dt[s[l]-'a']==1)
				--len;
			--dt[s[l]-'a'];	
			++l;	
		}
	}
	cout<<ans;
}

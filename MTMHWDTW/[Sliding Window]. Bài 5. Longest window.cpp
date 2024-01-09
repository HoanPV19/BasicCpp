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
	int len=0;
	int dt[24]={};
	int ans=0;
	for(int r=0;r<s.size();r++)
	{
		++dt[s[r]-'a'];
		while(dt[s[r]-'a']>1)
			--dt[s[l++]-'a'];
		ans=max(ans, r-l+1);
	}
	cout<<ans;
}

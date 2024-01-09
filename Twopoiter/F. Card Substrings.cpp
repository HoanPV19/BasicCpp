#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n, m;
    string s, b;
    cin>>n>>m>>s>>b;
    map<char , int> mp, tmp;
    for(int i=0;i<m;i++)
    	++mp[b[i]];
    ll len=0, l=0;
    for(int r=0;r<n;r++)
    {
    	++tmp[s[r]];
    	while(tmp[s[r]]>mp[s[r]])
    	{
    		--tmp[s[l]];
    		++l;
		}
		len+=r-l+1;
	}
	cout<<len<<'\n';
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long


void pro()
{
	string s;
	int k;
	cin>>k>>s;
	int b=0;
	for(int i=0;i<s.size();i++)
	{
		int idx=i;
		for(int j=i+1;j<s.size();j++)
		{
			if(s[j]>s[idx]) idx=j;
		}
		if(idx!=i)
		{
			++b;
			swap(s[i], s[idx]);
		}
		if(b==k) break;
	}
	cout<<s<<'\n';
}
int main()
{  
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin>>T;
	while(T--)
		pro();
	
}






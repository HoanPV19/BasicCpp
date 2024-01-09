#include<bits/stdc++.h>
using namespace std;
#define ll long long

void pro()
{
	string s1, s2,s1t, s2t, smax="", smin="";
	cin>>s1>>s2;
	s1t=s1;
	s2t=s2;
	while(!s1.empty()&&!s2.empty())
	{
		if(s1+s2<s2+s1)
		{
			smin+=s1[0];
			s1.erase(s1.begin());
		}
		else
		{
			smin+=s2[0];
			s2.erase(s2.begin());
		}
	}	
	smin+=s1+s2;
	s1=s1t;
	s2=s2t;
	while(!s1.empty()&&!s2.empty())
	{
		if(s1+s2>s2+s1)
		{
			smax+=s1[0];
			s1.erase(s1.begin());
		}
		else
		{
			smax+=s2[0];
			s2.erase(s2.begin());
		}
	}
	smax+=s1+s2;
	cout<<smin<<'\n'<<smax;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pro();
}

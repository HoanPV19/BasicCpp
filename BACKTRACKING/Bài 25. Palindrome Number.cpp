#include <bits/stdc++.h>
using namespace std;
bool thuangich(string s)
{
	int l=0, r=s.size()-1;
	while(l<=r)
	{
		if(s[l]!=s[r])
			return false;
		++l;
		--r;
	}
return true;
}
void BT(string s, int index, vector<string> &v)
{
	if(index==s.size())
	{
		for(string x:v)
			cout<<x<<" ";
		cout<<'\n';
	}
	else
	{
		for(int i=index;i<s.size();i++)
		{
			string tmp=s.substr(index, i - index + 1);
			if(thuangich(tmp))
			{
				v.push_back(tmp);
				BT(s, i+1 ,v);
				v.pop_back();			
			}
		}
	}
}
int main()
{
	string s;
	cin>>s;
	vector <string> v;
	BT(s,0,v);
}
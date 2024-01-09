#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string s="";
vector <string> v;
void Try(int open, int close)
{
	if(s.size()==n*2)
	{
		v.push_back(s);
		return;
	}
	if(open>close)
	{
		s+=")";
		Try(open,close+1);
		s.pop_back();
	}
	if(open<n)
	{
		s+="(";
		Try(open+1,close);
		s.pop_back();
	}
}
void pro()
{
	cin>>n;
	n/=2;
	Try(0,0);
	sort(v.begin(), v.end());
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<'\n';
	cout<<v.size();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pro();
}

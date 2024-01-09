#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m,ok=0;
int cnt=0;
int X[100]={};
string s;
set <string> se;
void ql(int i)
{
	if(i==n)
		cout<<s<<'\n';
	else
	{
		if(isalpha(s[i]))
		{
			s[i]=toupper(s[i]);
			ql(i+1);
			s[i]=tolower(s[i]);
			ql(i+1);
		}
		else
			ql(i+1);
	}
}
void pro()
{
    cin>>s;
    n=s.size();
    ql(0);
}
int main()
{  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
//    cin>>T;
//    while(T--)
    pro();
}



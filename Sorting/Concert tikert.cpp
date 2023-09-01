// https://codeforces.com/gym/102961/problem/D
#include <bits/stdc++.h>
using namespace std;
vector <int> b;
multiset <int> a;
int n,m;
void solve(int x)
{
	auto j=a.upper_bound(x);
	if(j==a.begin())
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<*(--j)<<endl;
		a.erase(j);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.insert(x);
	}
	for(int i=0;i<m;i++)
	{
		cin>>x;
		b.push_back(x);
	}
	for(int i=0;i<m;i++)
	{
		solve(b[i]);
	}
}
   
	
	
	

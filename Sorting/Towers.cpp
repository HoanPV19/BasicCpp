// https://codeforces.com/gym/102961/problem/N
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n,x;
	multiset <int> se;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		auto it=se.upper_bound(x);
		if(it!=se.end())
			se.erase(it);
		se.insert(x);
	}
	cout<<(int)se.size();
}

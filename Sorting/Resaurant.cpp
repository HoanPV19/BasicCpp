// https://codeforces.com/gym/102961/problem/E
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin>>n;
	vector <pair <int, int>> time;
	int x,y;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		time.push_back({x,1});
		time.push_back({y,-1});
	}
	sort(time.begin(), time.end());
	int res=0;
	int ans=0;
	for(int i=0;i<2*n;i++)
	{
		ans+=time[i].second;
		res=max(res,ans);
	}
	cout<<res;
}
   
	
	
	

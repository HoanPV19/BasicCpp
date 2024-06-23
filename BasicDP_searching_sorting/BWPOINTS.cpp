#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;
bool cmp(pair<int,int> a, pair<int,int> b)
{
	return a.first<b.first;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	vector <pair<int,int>> V;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		V.push_back({x,1});
	}
	for(int i=0;i<n;i++)
	{
		cin>>x;
		V.push_back({x,-1});
	}
	sort(V.begin(),V.end(),cmp);
	int k=0;
	for(int i=0;i<2*n-1;i++)
	{
		if(V[i].second!=V[i+1].second)
		{
			++k;
			++i;
		}
	}
	cout<<k;
}
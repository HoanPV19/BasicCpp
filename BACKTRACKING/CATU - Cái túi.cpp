#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <pair<int, int>> vw;
int n, m;
vector <int> v, vmax;
int ans=0;
void Try(int pos, int m, int sum)
{
	if(pos>=n)
	{
		if(sum>ans)
		{
			ans=sum;
			vmax=v;
		}
		return;
	}
	for(int i=pos;i<n;i++)
	{
		if(m-vw[i].first>=0)
		{
			v.push_back(i);
			Try(i+1,m-vw[i].first, sum+vw[i].second);
			v.pop_back();
		}
		else
			Try(i+1,m, sum);
	}
}
void pro()
{
	cin>>n>>m;
	int x, y;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		vw.push_back({x,y});
	}
	Try(0,m, 0);
	if(ans==0)
		cout<<"0\n";
	else
	{
		cout<<ans<<'\n';
		for(int i=0;i<vmax.size();i++)
			cout<<vmax[i]+1<<" ";
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pro();
}

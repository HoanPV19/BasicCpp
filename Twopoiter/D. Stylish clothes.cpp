#include<bits/stdc++.h>
using namespace std;

int main() {
    vector <pair<int, int>> v;
    int n,x;
    int N=0;
    int a[4]={}, b[4]={};
    for(int i=0;i<4;i++)
    {
    	cin>>n;
    	for(int j=0;j<n;j++)
    	{
    		cin>>x;
    		v.push_back({x,i});
		}
	}
	sort(v.begin(), v.end());
	int l=0, ll=0, rr=0, dem=0, ans=1e9;
	for(int r=0; r<v.size();r++)
	{
		if(!b[v[r].second])
			++dem;
		++b[v[r].second];
		if(dem<4)
			continue;
		while(b[v[l].second]>1)
		{
			--b[v[l].second];
			++l;
		}
		if(v[r].first-v[l].first<ans)
		{
			ans=v[r].first-v[l].first;
			rr=r;
			ll=l;
		}
	}
	for(int i=ll;i<=rr;i++)
		if(!a[v[i].second]) a[v[i].second]=v[i].first;
	for(int i=0;i<4;i++)
		cout<<a[i]<<" ";
}

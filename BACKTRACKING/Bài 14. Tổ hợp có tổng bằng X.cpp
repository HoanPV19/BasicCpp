#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m=0,ok,s=0;
int cnt=1e9;
int a[105]={};
int used[100]={};
vector <vector<int>> r;
vector <int> tmp;
void ql(int pos,int sum)
{
	if(sum==0)
		r.push_back(tmp);
	while(pos<=n&&sum-a[pos]>=0)
	{
		tmp.push_back(a[pos]);
		ql(pos,sum-a[pos]);
		tmp.pop_back();
		++pos;
	}
}
void pro()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    sort(a+1,a+n+1);
    ql(1,k);
    if(r.empty())
    	cout<<"-1\n";
    else
    {
    	cout<<r.size()<<'\n';
    	for(int i=0;i<r.size();i++)
    	{
    		sort(r[i].begin(), r[i].end());
    		cout<<"{";
    		for(int j=0;j<r[i].size();j++)
    		{
    			cout<<r[i][j];
    			if(j!=r[i].size()-1)
    				cout<<" ";
    			else 
    				cout<<"}\n";
			}
		}
	}
}
int main()
{  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
//    int T;
//    cin>>T;
//    while(T--)
    pro();
}

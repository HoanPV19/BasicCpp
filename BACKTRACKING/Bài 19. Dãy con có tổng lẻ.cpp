#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m;
int cnt=0;
int a[100];
vector <vector<int>> r;
vector <int> v;
void ql(int pos, int sum)
{
    if(sum%2)
    {
    	r.push_back(v);
	}
	for(int i=pos;i<=n;i++)
	{
		v.push_back(a[i]);
		ql(i+1,sum+a[i]);
		v.pop_back();
	}
}
void pro()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    ql(1,0);
    if(r.empty())
    	cout<<"NOT FOUND\n";
    else
    {
    	sort(r.begin(), r.end());
    	for(int j=0;j<r.size();j++)
    	{
    		for(int i=0;i<r[j].size();i++)
    			cout<<r[j][i]<<' ';
    		cout<<'\n';
		}
	}
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

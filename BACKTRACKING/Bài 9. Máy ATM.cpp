#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k,m,ok=0;
int cnt=1e9;
ll v[100]={};
void ql(int i, ll sum, int pos)
{
   if(sum==k)
   {
   		cnt=min(cnt, i);
   		return;
   }
   for(int j=pos;j<n;j++)
   {
   		if(sum+v[j]<=k)
   			ql(i+1, sum+v[j], j+1);
   }
}
void pro()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    	cin>>v[i];
    sort(v, v + n);
	ql(0,0,0);
	if(cnt==1e9)
		cout<<"-1\n";
	else
		cout<<cnt<<'\n';
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

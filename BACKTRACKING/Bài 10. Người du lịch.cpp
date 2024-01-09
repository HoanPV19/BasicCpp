#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k,m,ok=0;
int cnt=1e9;
int c[100][100]={};
int used[100]={};
int smax=1e9;
int dem=0;
void ql(int i , int sum, int cnt)
{
	used[i]=1;
	if(cnt==n) 
	{
		smax=min(smax, sum+c[i][1]);
		return;
   	}
   for(int j=1;j<=n;j++)
   {
   		if(!used[j]&&sum+c[i][j]<smax)
   		{
   			ql(j, sum+c[i][j],cnt+1);
   			used[j]=0;
		}
   }
   
}
void pro()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    	for(int j=1;j<=n;j++)
    		cin>>c[i][j];
    ql(1,0,1);
    cout<<smax<<'\n';
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

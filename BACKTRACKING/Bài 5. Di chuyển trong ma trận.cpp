#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m;
int cnt=0;
int a[100][100];
void ql(int i, int j)
{
    if(i==n&&j==m)
    	++cnt;
    if(i+1<=n)
    	ql(i+1,j);
    if(j+1<=m)
    	ql(i,j+1);
}
void pro()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    	for(int j=1;j<=m;j++)
    		cin>>a[i][j];
    ql(1, 1);
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

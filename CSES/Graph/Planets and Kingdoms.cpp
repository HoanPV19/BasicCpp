#include <bits/stdc++.h>
#define ll long long
#define ii tuple<ll, int, int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX = 1e5 + 7;
int par[MAX]={};
int n, m;
vector <int> dsk[MAX][2];
void dfs1(int u, int nhom)
{
    par[u]=-nhom;
    for(int v:dsk[u][0])
    {
        if(par[v]<=0&&par[v]!=-nhom)
            dfs1(v,nhom);
    }
}
void dfs2(int u,int nhom)
{
    par[u]=nhom;
    for(int v:dsk[u][1])
    {
        if(par[v]==-nhom)
        {
            dfs2(v,nhom);
        }
    }
}
void testcase()
{
    cin>>n>>m;
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        dsk[x][0].push_back(y);
        dsk[y][1].push_back(x);
    }
    int cnt=1;
    for(int i=1;i<=n;i++)
    {
         
        if(par[i]<=0)
        {
            
            dfs1(i,cnt);
            dfs2(i,cnt);
            ++cnt;
        }
    }
     --cnt;
    cout<<cnt<<'\n';
    for(int i=1;i<=n;i++)
    {
        cout<<par[i]<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    testcase();
    return 0;
}
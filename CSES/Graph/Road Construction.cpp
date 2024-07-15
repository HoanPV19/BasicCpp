#include <bits/stdc++.h>
#define ll long long
#define ii tuple<ll, int, int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX = 2e5 + 7;
int n, m;
int par[MAX];
int sz[MAX];
int find(int u)
{
    if(par[u]<0)
        return u;
    int p=find(par[u]);
    par[u]=p;
    return par[u];
}
int maxSZ=1, cnt;
void merge(int u, int v)
{
    u=find(u), v=find(v);
    if(u==v)
        return;
    --cnt;
    if(sz[u]<sz[v])
        swap(u,v);
    sz[u]+=sz[v];
    par[v]=u;
    maxSZ=max(maxSZ,sz[u]);
}
void testcase()
{
    cin >> n >> m;
    cnt=n;
    fill(par,par+n+1,-1);
    fill(sz,sz+n+1,1);
    int x, y, c;
    for (int i = 1; i <= m; i++)
    {
       cin>>x>>y;
        merge(x,y);
        cout<<cnt<<" "<<maxSZ<<"\n";
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
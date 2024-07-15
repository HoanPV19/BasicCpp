#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
vector<int> dsk[100005];
int ds[100005];
int cha[100005];

void dfs(int v)
{
    for(int u:dsk[v])
    {
        if(u!=cha[v])
        {
            cha[u]=v;
            dfs(u);
        }
    }
}
int find(int v)
{
    if(ds[v]<0)
        return v;
    ds[v]=find(ds[v]);
    return ds[v];
}
bool merge(int u, int v)
{
    u=find(u);
    v=find(v);
    if(u==v) return false; // phat hien chu trinh
    if(ds[u]<ds[v]) //-3 -2 
        swap(u,v); //dam bao so phan tu tap u<tap v
    ds[v]+=ds[u];
    ds[u]=v;
return true;
}
void testcase()
{
    int n, m, x, y;
    cin >> n >> m;
    fill(ds+1,ds+n+1,-1);
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        if(!merge(x,y))
        {
            vector <int> path;
            dfs(x);
            int u=y;
            while(u)
            {
                path.push_back(u);
                u=cha[u];
            }
            cout<<path.size()+1<<'\n';
            for(int v:path)
                cout<<v<<" ";
            cout<<y<<'\n';
            return;
        }
        else
        {
            dsk[x].push_back(y);
            dsk[y].push_back(x);
        }
    }
    cout<<"IMPOSSIBLE\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        testcase();
    }
    return 0;
}
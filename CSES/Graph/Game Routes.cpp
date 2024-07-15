#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
const ll MOD= 1e9+7;
const int MAX = 1e5 + 7;
vector<int> dsk[MAX];
int n, m;
ll d[MAX];
int bbv[MAX];
void dfs(int u)
{
    d[u] = 1;
    for (int v : dsk[u])
        if (!d[v])
            dfs(v);
}
void kahn()
{
    queue<int> q;
    fill(d+1,d+n+1,0);
    d[1]=1;
    q.push(1);
    for(int i=2;i<=n;i++)
    {
        if(bbv[i]==0)
        {
            q.push(i);
            d[i]=-1;
        }
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v:dsk[u])
        {
            if(d[u]!=-1)
            {
                d[v]=(d[v]+d[u])%MOD;
            }
            --bbv[v];
            if(!bbv[v])
                q.push(v);
        }
        
    }
    cout<<d[n]<<'\n';

}
void testcase()
{
    cin >> n >> m;
    int x, y;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        dsk[x].push_back(y);
        ++bbv[y];
    }
    dfs(1);
    if (!d[n])
    {
        cout << '0';
        return;
    }
   kahn();
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        testcase();
    }
    return 0;
}

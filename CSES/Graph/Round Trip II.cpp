#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
using namespace std;
const int MAX = 100005;
 
int n, m, k;
vector<int> dsk[MAX];
int cha[MAX];
int check[MAX]={0};
vector <int> path;
void dfs(int u)
{
    check[u]=1;
    for(int v:dsk[u])
    {
        if(check[v]==1)
        {
            path.push_back(v);
            while(u!=v)
            {
                path.push_back(u);
                u=cha[u];
            }
            path.push_back(v);
            reverse(path.begin(),path.end());
            cout<<path.size()<<'\n';
            for(int x:path)
                cout<<x<<" ";
            exit(0);
        }
        if(check[v]==0)
        {
            cha[v]=u;
            dfs(v);
        }
    }
    check[u]=2;
}
void testcase()
{
    int x, y, c;
    cin >> n >> m ;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y ;
        dsk[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
    {
        if(!check[i])
        {
            dfs(i);
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

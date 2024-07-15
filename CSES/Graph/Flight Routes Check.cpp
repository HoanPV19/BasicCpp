#include <bits/stdc++.h>
#define ll long long
#define ii tuple<ll, int, int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX = 2e5 + 7;
int n, m;
bool mark[MAX];
vector<int> dsk[MAX][2];
void dfs(int u, int cnt)
{
    mark[u] = true;
    for (int v : dsk[u][cnt])
        if (!mark[v])
            dfs(v, cnt);
}
void testcase()
{
    cin >> n >> m;
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        dsk[x][0].push_back(y);
        dsk[y][1].push_back(x);
    }
    dfs(1,0);
    for(int i=1;i<=n;i++)
    {
        if(!mark[i])
        {
            cout<<"NO\n";
            cout<<"1 "<<i;
            return;
        }
    }
    memset(mark,false,sizeof(mark));
    dfs(1,1);
    for(int i=1;i<=n;i++)
    {
        if(!mark[i])
        {
            cout<<"NO\n";
            cout<<i<<" 1";
            return;
        }
    }
    cout<<"YES\n";
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
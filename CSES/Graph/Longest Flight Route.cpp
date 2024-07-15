#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
const int MAX = 1e5 + 7;
vector<int> dsk[MAX];
int n, m;
int d[MAX]={0};
int cha[MAX];
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
    fill(d + 1, d + n + 1, -1);
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (!bbv[i])
            q.push(i);
    }
    d[1]=1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : dsk[u])
        {
            if (d[u]!=-1&&d[v] < d[u] + 1)
            {
                d[v] = d[u] + 1;
                cha[v] = u;
            }
            --bbv[v];
            if (!bbv[v])
                q.push(v);
        }
    }
    vector<int> path;
    int u = n;
    while (u != 0)
    {
        path.push_back(u);
        u = cha[u];
    }
    cout << d[n] << '\n';
    reverse(path.begin(), path.end());
    for (int x : path)
        cout << x << " ";
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
        cout << "IMPOSSIBLE\n";
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

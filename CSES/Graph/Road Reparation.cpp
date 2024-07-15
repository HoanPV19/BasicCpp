#include <bits/stdc++.h>
#define ll long long
#define ii tuple<ll, int, int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX = 2e5 + 7;
int n, m;
bool mark[MAX];
priority_queue<ii, vector<ii>, greater<ii>> q;
vector<pair<ll, int>> dsk[MAX];
void prim()
{
    ll res = 0;
    mark[1] = true;
    int cnt = 1;
    for (pair<ll, int> x : dsk[1])
    {
        if (!mark[x.second])
            q.push({x.first, 1, x.second});
    }
    while (!q.empty())
    {
        ll c = get<0>(q.top());
        int u = get<1>(q.top());
        int v = get<2>(q.top());
        q.pop();
        if (mark[u] && mark[v])
        {
            continue;
        }
        else if (!mark[u] && mark[v])
        {
            ++cnt;
            res += c;
            mark[u] = true;
            for (pair<ll, int> x : dsk[u])
            {
                if (!mark[x.second])
                    q.push({x.first, 1, x.second});
            }
        }
        else if (mark[u] && !mark[v])
        {
            ++cnt;
            res += c;
            mark[v] = true;
            for (pair<ll, int> x : dsk[v])
            {
                if (!mark[x.second])
                    q.push({x.first, 1, x.second});
            }
        }
        if (cnt == n)
            break;
    }
    if (cnt != n)
        cout << "IMPOSSIBLE\n";
    else
        cout << res << '\n';
}
void testcase()
{
    cin >> n >> m;
    int x, y, c;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> c;
        dsk[x].push_back({c, y});
        dsk[y].push_back({c, x});
    }
    prim();
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
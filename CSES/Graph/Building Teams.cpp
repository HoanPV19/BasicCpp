#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
vector<int> dsk[200005];
int nhom[200005] = {0};
bool nok = 0;
void bfs(int s)
{
    nhom[s] = 1;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : dsk[v])
        {
            if (nhom[u] == 0)
            {
                nhom[u] = 3 - nhom[v];
                q.push(u);
            }
            else if (nhom[u] != 3 - nhom[v])
            {
                nok = 1;
                return;
            }
        }
    }
}
void testcase()
{
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        dsk[x].push_back(y);
        dsk[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!nhom[i])
        {
            bfs(i);
        }
        if (nok)
            break;
    }
    if (nok)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
            cout << nhom[i] << " ";
    }
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

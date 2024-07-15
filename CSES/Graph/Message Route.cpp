#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
vector<int> dsk[100005];
bool mark[100005];
int cha[100005] = {0};
void bfs(int s, int e)
{
    queue<int> q;
    q.push(s);
    mark[s] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : dsk[v])
        {
            if (!mark[u])
            {
                mark[u] = true;
                q.push(u);
                cha[u] = v;
                if (u == e)
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
    bfs(1, n);
    if (!cha[n])
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        stack<int> st;
        while (n)
        {
            st.push(n);
            n = cha[n];
        }
        cout<<st.size()<<'\n';
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
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

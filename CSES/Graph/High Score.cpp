#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll n, m, x, y, c;
ll INF = LONG_LONG_MAX, nINF = LONG_LONG_MIN;
ll d[2505];
struct edge
{
    ll dau, cuoi, ts;
    edge(ll x, ll y, ll c)
    {
        dau = x, cuoi = y, ts = c;
    }
};
vector <ll> idsk[2505];
vector <ll> ddsk[2505];
vector<edge> E;
bool imark[2505];
bool dmark[2505];
void idfs(int u)
{   imark[u]=true;
    for(int v:idsk[u])
    if(!imark[v])
        idfs(v);
}
void ddfs(int u)
{   dmark[u]=true;
    for(int v:ddsk[u])
    if(!dmark[v])
        ddfs(v);
}
void BellmanForce()
{
    idfs(1);
    ddfs(n);
    // if(n==1)
    // {
    //     cout<<"-1";
    //     return;
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll u = E[j].dau, v = E[j].cuoi, w = E[j].ts;
            if (d[u] != nINF && d[v] < d[u] + w)
            {
                d[v] = d[u] + w;
                if(i==n&&imark[v]&&dmark[v])
                {
                    cout<<"-1\n";
                    return;
                }
            }
        }
    }
    cout << d[n];
}
void testcase()
{
    cin >> n >> m;
    fill(d + 1, d + n + 1, nINF);
    d[1] = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> c;
        E.push_back(edge(x, y, c));
        idsk[x].push_back(y);
        ddsk[y].push_back(x);
    }
    BellmanForce();
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

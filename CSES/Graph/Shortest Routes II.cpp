#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
using namespace std;
const int MAX = 1005;

int n, m;
const ll INF=LONG_LONG_MAX;
ll d[MAX][MAX];
void floy()
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(d[i][k]<INF&&d[k][j]<INF)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}
void testcase()
{

    int x, y, q;
    ll c;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            d[i][j]=INF;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> c;
        if(d[x][y]==INF)
        {
            d[x][y] = c;
            d[y][x] = c;
        }
        else if(d[x][y]>c)
        {
            d[x][y] = c;
            d[y][x] = c;
        }
    }
    for (int i = 1; i <= n; i++)
        d[i][i]=0;
    floy();
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        if (d[x][y] >= INF)
            cout << "-1\n";
        else
            cout << d[x][y] << '\n';
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

#include <bits/stdc++.h>
#define ll long long
#define ii tuple<ll, int, int>
using namespace std;
int dx[] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[] = {-1, 1, 2, 2, 1, -1, -2, -2};
ll MOD = 1e9 + 7;
const int MAX = 1e5 + 7;
int n, m;
int path[9][9] = {0};
int deg[9][9] = {0};
int res = 0;

bool safe(int x, int y)
{
    if (x < 1 || x > 8 || y < 1 || y > 8 || path[x][y])
        return false;
    return true;
}
void ktao()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                int X = i + dx[k];
                int Y = j + dy[k];
                if (safe(X, Y))
                    ++deg[X][Y];
            }
        }
    }
}
void mark( int x, int y)
{
    for (int i = 0; i < 8; i++)
    {
        int X = x + dx[i];
        int Y = y + dy[i];
        if (safe(X, Y))
            --deg[X][Y];
    }
}
void unmark(int x, int y)
{
    path[x][y] = 0;
    for (int i = 0; i < 8; i++)
    {
        int X = x + dx[i];
        int Y = y + dy[i];
        if (safe(X, Y))
            ++deg[X][Y];
    }
}

void dfs(int x, int y, int cnt)
{
    path[x][y] = cnt;
    if (cnt>= 64)
    {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
                cout << path[i][j] << " ";
            cout << '\n';
        }
        exit(0);
    }
    vector<pair<int,int>> v;
    for (int i = 0; i < 8; i++)
    {
        int X = x + dx[i];
        int Y = y + dy[i];
        if (safe(X, Y))
        {
            v.push_back({deg[X][Y], i});
        }
    }
    sort(v.begin(), v.end());
    for(pair<int,int> p:v)
    {
        int X = x + dx[p.second];
        int Y = y + dy[p.second];
        mark(X,Y);
        dfs(X,Y,cnt+1);
    }
    unmark(x,y);
}

void testcase()
{
    cin >> n >> m;
    ktao();
    dfs(m, n, 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        testcase();
    }
    return 0;
}

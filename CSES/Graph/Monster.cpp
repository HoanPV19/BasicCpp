#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MAX = 1005;
char s[MAX][MAX];
int M[MAX][MAX];
int n, m;
int cha[MAX][MAX];
bool mark[MAX][MAX];
char step(int i, int j, int I, int J)
{
    if (i == I && j - 1 == J)
        return 'L';
    if (i == I && j + 1 == J)
        return 'R';
    if (i - 1 == I && j == J)
        return 'U';
    if (i + 1 == I && j == J)
        return 'D';
}
bool safe(int x, int y)
{
    if (x < 1 || y < 1 || x > n || y > m)
        return false;
    return true;
}
 queue<int> Monster;
void Mbfs()
{
    while (!Monster.empty())
    {
        int x =  Monster.front() / MAX;
        int y =  Monster.front() % MAX;
         Monster.pop();
        for (int i = 0; i < 4; i++)
        {
            int u = x + dx[i], v = y + dy[i];
            if (safe(u, v) && s[u][v] != '#'&&M[u][v]>M[x][y]+1)
            {
                M[u][v] = M[x][y] + 1;
                Monster.push(u * MAX + v);
            }
        }
    }
}
void Abfs(int x, int y)
{
    memset(mark, false, sizeof mark);
    queue<int> q;
    mark[x][y] = true;
    M[x][y] = 0;
    q.push(x * MAX + y);
    while (!q.empty())
    {
        x = q.front() / MAX;
        y = q.front() % MAX;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int u = x + dx[i], v = y + dy[i];
            if (safe(u, v) && !mark[u][v] && s[u][v] == '.')
            {
                mark[u][v] = true;
                if (M[u][v] <= M[x][y] + 1)
                {
                    s[u][v] = '#';
                    continue;
                }
                M[u][v] = M[x][y] + 1;
                q.push(u * MAX + v);
            }
        }
    }
}
int xr = 0, yr = 0;
void bfs(int x, int y)
{
    memset(mark, false, sizeof mark);
    queue<int> q;
    mark[x][y] = true;
    cha[x][y] = 0;
    if (x == 1 || x == n || y == 1 || y == m)
    {
        xr = x, yr = y;
        return;
    }
    q.push(x * MAX + y);
    while (!q.empty())
    {
        x = q.front() / MAX;
        y = q.front() % MAX;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int u = x + dx[i], v = y + dy[i];
            if (safe(u, v) && !mark[u][v] && s[u][v] == '.')
            {
                mark[u][v] = true;
                cha[u][v] = x * MAX + y;
                if (u == 1 || u == n || v == 1 || v == m)
                {
                    xr = u, yr = v;
                    return;
                }
                q.push(u * MAX + v);
            }
        }
    }
}
void testcase()
{
    int ia = 0, ib = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            M[i][j]=1e9;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == 'A')
            {
                ia = i, ib = j;
                mark[i][j]=true;
                M[i][j]=0;
            }
            else if (s[i][j] == 'M')
            {
                Monster.push(i * MAX + j);
                M[i][j]=0;
                mark[i][j]=true;
            }
        }
    Mbfs();
    Abfs(ia, ib);
    bfs(ia, ib);
    if (xr == 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        stack <char> se;
        while (cha[xr][yr] != 0)
        {
            int i = cha[xr][yr] / MAX;
            int j = cha[xr][yr] % MAX;
            se .push(step(i, j, xr, yr));
            xr = i;
            yr = j;
        }
        cout << se.size() << '\n';
        while(!se.empty())
        {
            cout<<se.top();
            se.pop();
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

#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
char s[1005][1005];
int n, m;
void Try(int x, int y)
{
    if (s[x][y] == '#' || x < 1 || x > n || y < 1 || y > m)
        return;
    s[x][y] = '#';
    Try(x, y - 1);
    Try(x, y + 1);
    Try(x - 1, y);
    Try(x + 1, y);
}
void testcase()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> s[i][j];
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (s[i][j] == '.')
            {
                ++cnt;
                //     cout<<i<<" "<<j<<'\n';
                Try(i, j);
            }
        }
    cout << cnt << '\n';
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

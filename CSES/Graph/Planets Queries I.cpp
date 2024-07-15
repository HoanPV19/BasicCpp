#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
using namespace std;
const ll MOD = 1e9 + 7;
const int MAX = 2e5 + 7;
const ll INF = 1e18;
int n, q;
int dp[MAX][32];
void LCA()
{
    for (int i = 1; i <= 31; i++)
    {
        for (int j = 1; j <= n; j++)
            dp[j][i] = dp[dp[j][i-1]][i-1];
    }
}

void testcase()
{

    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> dp[i][0];
    }
    LCA();
    int k,res;
    for (int i = 0; i < q; i++)
    {
        cin>>res>>k;
        for (int j = 0; j <= 31; j++)
        {
            if (k & (1 << j))       // kiem tra bit thu j la 1 ko
                res = dp[res][j];
        }
        cout<<res<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        testcase();
    }
    return 0;
}

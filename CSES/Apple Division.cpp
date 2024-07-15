#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
ll a[25];
ll sum = 0, res = 1e18;
int n;
void Try(ll w, int k)
{
    res = min(res, abs(sum - w - w));
    for (int i = k; i <= n; i++)
        Try(w - a[i], i + 1);
}
void testcase()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    Try(sum, 1);
    cout << res << '\n';
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

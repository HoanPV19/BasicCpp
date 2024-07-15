#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void testcase()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cout << i * i * (i * i - 1) / 2 - 4 * (i * i - 3 * i + 2) << '\n';
    }
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

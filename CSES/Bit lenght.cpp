#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
ll binpow(int n, int k)
{
    if (k == 0)
        return 1;
    ll tmp = binpow(n, k / 2);
    if (k % 2)
        return (tmp * tmp * n) % MOD;
    else
        return (tmp * tmp) % MOD;
}
void testcase()
{
    ll n;
    cin >> n;
    cout << binpow(2, n);
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
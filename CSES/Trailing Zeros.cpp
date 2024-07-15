#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void testcase()
{
    int m, so2 = 0, so5 = 0;
    cin >> m;
    // for(ll i=5;i<=m;i+=5)
    // {
    //     ll n=i;
    // while(n%5==0)
    // {
    //     n/=5;
    //     ++so5;
    // }
    // }
    while (m >= 5)
    {
        m = m / 5;
        so5 += m;
    }
    cout << so5 << '\n';
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

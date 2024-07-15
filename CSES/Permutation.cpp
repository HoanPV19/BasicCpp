#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void testcase()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return;
    }
    if (n < 4)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    int k = 1;
    while (2 * k <= n)
    {
        cout << 2 * k << ' ';
        ++k;
    }
    k = 0;
    while (2 * k + 1 <= n)
    {
        cout << 2 * k + 1 << ' ';
        ++k;
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
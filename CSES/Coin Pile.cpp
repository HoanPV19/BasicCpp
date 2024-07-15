#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void testcase()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    if ((a + b) % 3)
    {
        cout << "NO\n";
        return;
    }
    if (a < b / 2)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        testcase();
    }
    return 0;
}

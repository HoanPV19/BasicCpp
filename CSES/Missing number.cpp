#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void testcase()
{
    int n;
    cin >> n;
    bool a[1000005];
    int x = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        a[x] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
        {
            cout << i;
            return;
        }
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
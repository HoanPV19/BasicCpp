#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void testcase()
{
    ll n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2)
        {
            n = n * 3 + 1;
        }
        else
        {
            n = n / 2;
        }
        cout << n << " ";
    }
    cout << "\n";
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
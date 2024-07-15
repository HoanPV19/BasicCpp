#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
int buoc(int n)
{
    if (n == 1)
        return 1;
    return 2 * buoc(n - 1) + 1;
}
void cuthe(int n, char dau, char trunggian, char cuoi)
{
    if (n == 0)
        return;
    else
    {
        cuthe(n - 1, dau, cuoi, trunggian);
        cout << dau << " " << cuoi << '\n';
        cuthe(n - 1, trunggian, dau, cuoi);
    }
}
void testcase()
{
    int n;
    cin >> n;
    cout << buoc(n) << '\n';
    cuthe(n, '1', '2', '3');
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

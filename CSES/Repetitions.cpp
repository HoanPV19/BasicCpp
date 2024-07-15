#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void testcase()
{
    string s;
    cin >> s;
    s = s + "@";
    int res = 1;
    int cnt = 1;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            res = max(res, cnt);
            cnt = 1;
        }
        else
            ++cnt;
    }
    cout << res << "\n";
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
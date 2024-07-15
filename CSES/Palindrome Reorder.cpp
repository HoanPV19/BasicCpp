#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void testcase()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (char x : s)
        ++mp[x];
    int cle = 0;
    string res = "";
    for (auto &x : mp)
    {
        if (x.second % 2)
        {
            ++cle;
            if (cle > 1)
            {
                cout << "NO SOLUTION\n";
                return;
            }
            res += x.first;
            --x.second;
        }
    }
    for (auto &x : mp)
    {
        if (x.second)
        {
            res = string(x.second / 2, x.first) + res + string(x.second / 2, x.first);
        }
    }
    cout << res;
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

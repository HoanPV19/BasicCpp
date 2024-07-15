#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;

void testcase()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    set<string> se;
    se.insert(s);
    while (next_permutation(s.begin(), s.end()))
    {
        se.insert(s);
    }
    cout << se.size() << "\n";
    for (string x : se)
    {
        cout << x << "\n";
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

#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void conver(int i, int len)
{
    int n = i ^ (i >> 1);
    string s = "";
    while (n)
    {
        if (n % 2)
            s = "1" + s;
        else
            s = "0" + s;
        n /= 2;
    }
    s = string(len - s.size(), '0') + s;
    cout << s << '\n';
}
void testcase()
{
    int n;
    cin >> n;
    for (int i = 0; i < pow(2, n); i++)
        conver(i, n);
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

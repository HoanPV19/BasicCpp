#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD = 1e9 + 7;
void testcase()
{
    ll n;
    cin >> n;
    ll length = 1, start = 1, cnt = 9;
    while (n > length * cnt)
    {
        n -= length * cnt;
        ++length;
        cnt *= 10;
        start *= 10;
    }
    ll num = start + (n - 1) / length;
    string s = to_string(num);
    cout << s[(n - 1) % length] << '\n';
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {

        testcase();
    }
}
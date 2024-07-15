#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;
void testcase()
{
    ll hang, cot;
    cin >> hang >> cot;
    if (hang > cot)
    {
        if (hang % 2)
        {
            --hang;
            cout << hang * hang + cot << '\n';
        }
        else
        {
            cout << hang * hang - cot + 1 << '\n';
        }
    }
    else
    {

        if (cot % 2)
        {
            cout << cot * cot - hang + 1 << '\n';
        }
        else
        {
            --cot;
            cout << cot * cot + hang << "\n";
        }
    }
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
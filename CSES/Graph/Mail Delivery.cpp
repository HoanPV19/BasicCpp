#include <bits/stdc++.h>
#define ll long long
#define ii tuple<ll, int, int>
using namespace std;

ll MOD = 1e9 + 7;
const int MAX = 1e5 + 7;
int n, m;
int deg[MAX];
vector<set<int>> dsk(MAX);
vector<int> path;

void dfs(int u) {
    while (!dsk[u].empty()) {
        int v = *dsk[u].begin();
        dsk[u].erase(v);
        dsk[v].erase(u);
        dfs(v);
    }
    path.push_back(u);
}

void testcase() {
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        dsk[x].insert(y);
        ++deg[x];
        ++deg[y];
    }
    for (int i = 1; i <= n; ++i) {
        if (deg[i] % 2) {
            cout << "IMPOSSIBLE\n";
            return;
        }
    }
    dfs(1);
    reverse(path.begin(), path.end());
    if (path.size() != m) {
        cout << "IMPOSSIBLE\n";
        return;
    }
    for (int x : path)
        cout << x << ' ';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--) {
        testcase();
    }
    return 0;
}

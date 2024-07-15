#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define iii tuple<long long, int, int>
const int MAX = 100005;

int n, m;
vector<pair<int, ll>> dsk[MAX];

void dijsktra(int s) {
    ll d[MAX][2];
    for (int i = 1; i <= n; i++)
        d[i][0] = d[i][1] = 1e18;
    d[s][1] = d[s][0] = 0;
    priority_queue<iii, vector<iii>, greater<iii>> pq;
    pq.push({0, s, 1}); // 1 co the dung, 0 ko the - trong so , dinh, coup
    while (!pq.empty()) {
        int z = get<1>(pq.top()); 
        ll ddz = get<0>(pq.top()); 
        int coup = get<2>(pq.top()); 
        pq.pop();
        if (d[z][!coup] < ddz)
            continue;
        for (pair<int, ll> e : dsk[z]) {
            int u = e.first;
            ll wu = e.second;
            if (coup) {  // co the dung cp
                if (d[u][1] > ddz + wu / 2) { // su dung cp
                    d[u][1] = ddz + wu / 2;
                    pq.push({d[u][1], u, 0});
                }
                if (d[u][0] > ddz + wu) { // ko su dung cp
                    d[u][0] = ddz + wu;
                    pq.push({d[u][0], u, 1}); 
                }
            } else {
                if (d[u][1] > ddz + wu) { // ko su dung cp
                    d[u][1] = ddz + wu;
                    pq.push({d[u][1], u, 0});
                }
            }
        }
    }
    cout << min(d[n][1], d[n][0]);
}

void testcase() {
    int x, y, c;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> c;
        dsk[x].push_back({y, c});
    }
    dijsktra(1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--) {
        testcase();
    }
    return 0;
}

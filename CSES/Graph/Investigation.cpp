#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
using namespace std;
const ll MOD = 1e9 + 7;
const int MAX = 1e5 + 7;
const ll INF = 1e18; 
int n, m;
vector<ii> dsk[MAX];
ll d[MAX];
ll way[MAX];
int maxf[MAX], minf[MAX];
bool mark[MAX];

void dijkstra() {
    fill(d, d + n+1, INF); 
    fill(minf, minf + n+1, 1e9); 
    fill(maxf, maxf + n+1, 0); 
    fill(way, way + n+1, 0); 

    d[1] = 0;
    way[1] = 1;
    minf[1] = 0;
    maxf[1] = 0;

    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0, 1});

    while (!pq.empty()) {
        ll dz = pq.top().first;
        int z = pq.top().second;
        pq.pop();
        if (dz > d[z])
            continue;

        for (ii v : dsk[z]) {
            int u = v.second;
            ll du = v.first;
            if (d[u] > d[z] + du) { // ke thua
                d[u] = d[z] + du;
                way[u] = way[z];
                minf[u] = minf[z] + 1;
                maxf[u] = maxf[z] + 1;
                pq.push({d[u], u});
            } else if (d[u] == d[z] + du) {  
                way[u] = (way[u] + way[z]) % MOD;
                minf[u] = min(minf[u], minf[z] + 1);
                maxf[u] = max(maxf[u], maxf[z] + 1);
            }
        }
    }

    cout << d[n] << " " << way[n] << " " << minf[n] << " " << maxf[n] << '\n';
}

void testcase() {
    cin >> n >> m;
    int x, y;
    ll c;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y >> c;
        dsk[x].push_back({c, y});
    }
    dijkstra();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        testcase();
    }
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

const int MAX = 1006;
char s[MAX][MAX];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int cha[MAX][MAX];
int n, m;

char step(int i, int j, int I, int J) {
    if (i == I && j - 1 == J)
        return 'L';
    if (i == I && j + 1 == J)
        return 'R';
    if (i - 1 == I && j == J)
        return 'U';
    if (i + 1 == I && j == J)
        return 'D';
    return ' ';
}

void testcase() {
    cin >> n >> m;
    int sx, sy;
    for (int i = 0; i <= n + 1; ++i) {
        for (int j = 0; j <= m + 1; ++j) {
            if (i == 0 || i == n + 1 || j == 0 || j == m + 1) {
                s[i][j] = '#';
            } else {
                cin >> s[i][j];
                if (s[i][j] == 'A') {
                    sx = i;
                    sy = j;
                    s[i][j] = '#';
					cha[i][j]=0;
                }
            }
        }
    }

    queue<int> q;
    q.push(sx * MAX + sy);
    int xr = 0, yr = 0;
    bool ok = false;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        int sx = curr / MAX;
        int sy = curr % MAX;

        for (int i = 0; i < 4; ++i) {
            int x = sx + dx[i];
            int y = sy + dy[i];
            if (s[x][y] == '.') {
                s[x][y] = '#';
                q.push(x * MAX + y);
                cha[x][y] = sx * MAX + sy;
            } else if (s[x][y] == 'B') {
                cha[x][y] = sx * MAX + sy;
                xr = x;
                yr = y;
                ok = true;
                break;
            }
        }
        if (ok) break;
    }

    if (xr == 0) {
        cout << "NO\n";
    } else {
        string se = "";
        cout << "YES\n";
        while (cha[xr][yr] != 0) {
            int i = cha[xr][yr] / MAX;
            int j = cha[xr][yr] % MAX;
            se += step(i, j, xr, yr);
            xr = i;
            yr = j;
        }
		reverse(se.begin(),se.end());
        cout << se.size() << '\n';
        cout << se << '\n';
    }
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

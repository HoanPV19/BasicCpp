#include<bits/stdc++.h>
using namespace std;

const int MOD = 20020303;
int n, k;
int f[1000005];

int main() {
    cin >> n >> k;
    f[0] = 1;
    for(int i=1;i<=k;i++)
    	f[i]=i+1;
    for (int i = k+1; i <= n; i++) {
            f[i] = (f[i-1] + f[i-1-k]) % MOD;
    }
    cout << f[n];
    return 0;
}

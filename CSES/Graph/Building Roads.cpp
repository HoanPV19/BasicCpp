#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
vector <int> dsk[100005];
bool mark[100005];
void dfs(int v)
{
    mark[v]=true;
    for(int u:dsk[v])
    {
        if(!mark[u])
            dfs(u);
    }
}
void testcase() {
    int n, m,x,y;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        dsk[x].push_back(y);
        dsk[y].push_back(x);
    }
    vector <int> lt;
    for(int i=1;i<=n;i++)
    {
        if(!mark[i])
        {
            lt.push_back(i);
            dfs(i);
        }
    }
    cout<<lt.size()-1<<'\n';
    for(int i=0;i<lt.size()-1;i++)
    {
        cout<<lt[i]<<" "<<lt[i+1]<<'\n';
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

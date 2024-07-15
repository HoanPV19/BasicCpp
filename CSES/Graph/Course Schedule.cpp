#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
using namespace std;
const int MAX = 100005;
 
int n, m, k;
vector<int> dsk[MAX];
int cha[MAX];
int check[MAX]={0};
vector <int> path;
void testcase()
{
    int x, y;
    cin >> n >> m ;
    int bbv[MAX]={0};
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y ;
        dsk[x].push_back(y);
        bbv[y]++;
    }
    queue <int>q;
    for(int i=1;i<=n;i++)
    {
        if(bbv[i]==0)
            q.push(i);

    }
    int cnt=0;
    while(!q.empty())
    {
        int v=q.front();
        path.push_back(v);
        q.pop();
        ++cnt;
        for(int u:dsk[v])
        {
            --bbv[u];
            if(bbv[u]==0)
                q.push(u);   
        }
    }
    if(cnt!=n)
        cout<<"IMPOSSIBLE\n";
    else
    {
        for(int x:path)
            cout<<x<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        testcase();
    }
    return 0;
}

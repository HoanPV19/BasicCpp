#include <bits/stdc++.h>
#define ll long long
#define ii tuple<ll, int, int>
using namespace std;
ll MOD = 1e9 + 7;
const int MAX = 2e5 + 7;
int n, m;
bool mark[MAX];
int a[MAX];
int kq[MAX];
int buoc=0;
queue<int> q;
void dfs(int u)
{

    q.push(u);
    if(mark[u])
    {
        buoc+=kq[u];
        return;
    }
    else
    {
        ++buoc;
        mark[u]=true;
        dfs(a[u]);
    }
} 
void testcase()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(!mark[i])
        {
            buoc=0;
            dfs(i);
            int giam=1;
            while(!q.empty())
            {
                if(q.front()==q.back())
                    giam=0;
                kq[q.front()]=buoc;
                buoc-=giam;
                q.pop();
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<kq[i]<<' ';
    
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    testcase();
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
using namespace std;
const int MAX=100005;

int n, m, k;
vector <pair<int,ll>> dsk[MAX];
void yar()
{
    vector<ll> price;
    priority_queue <ii,vector<ii>,greater<ii>> q;
    q.push({0,1});
    int cnt[MAX]={0};
    while(!q.empty())
    {
        ll du = q.top().first;
        int u=q.top().second;
        q.pop();
        ++cnt[u];
        if(u==n)
        {
            cout<<du<<" ";
            if(cnt[u]==k)
                return;
        }
        if(cnt[u]<=k)
        {
            for(pair<int,ll> v:dsk[u])
            {
                q.push({v.second+du,v.first});
            }
        }
        
    }
}
void testcase()
{
  int x,y, c;
   cin>>n>>m>>k;
   for(int i=0;i<m;i++)
   {
        cin>>x>>y>>c;
        dsk[x].push_back({y,c});
   }
   yar();
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

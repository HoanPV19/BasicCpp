#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
using namespace std;
const int MAX=100005;

int n, m;
vector <pair<int,ll>> dsk[MAX];
void dijsktra(int s)
{
    ll d[MAX];
    fill(d+1,d+n+1,1e18);
    d[s]=0;
    priority_queue <ii,vector<ii>,greater<ii> >pq;
    pq.push({0,s});
    while(!pq.empty())
    {
        int z=pq.top().second;
        ll ddz=pq.top().first;
        pq.pop();
        if(d[z]<ddz)
            continue;
        for(ii u:dsk[z])
        {
            if(d[u.first]>d[z]+u.second)
            {
                d[u.first]=d[z]+u.second;
                pq.push({d[u.first],u.first});
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<d[i]<<" ";
}
void testcase()
{
  int x,y, c;
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
        cin>>x>>y>>c;
        dsk[x].push_back({y,c});
   }
   dijsktra(1);
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

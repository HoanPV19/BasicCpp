#include <bits/stdc++.h>
#define ll long long
#define iii tuple<int, int, ll>
using namespace std;
const int MAX=2505;
int n, m;
ll d[MAX];
vector <iii> dsk;
void BellmanForce()
{
    int cha[MAX];
    cha[1]=0;
    fill(d+1,d+n+1,1e18);
    d[1]=0;
    int cyc=-1;
    for(int i=1;i<=n;i++) // vong cuoi i=n neu cyc van cap nhat thi chung to co chu trinh 
    {
        cyc=0;
        for(int j=0;j<m;j++)
        {
            int u=get<0>(dsk[j]);
            int v=get<1>(dsk[j]);
            ll w=get<2>(dsk[j]);
            if(d[v]>d[u]+w)
            {
                d[v]=d[u]+w;
                cha[v]=u;
                cyc=v;
            }
        }
    }
    if(cyc==0)
    {
        cout<<"NO\n";
        return;
    }
    for(int i=1;i<=n;i++)
    {
        cyc=cha[cyc];
    }
    cout<<"YES\n";
    stack<int> st;
    for(int i=cyc;;i=cha[i])
    {
        st.push(i);
        if(i==cyc&&st.size()>1)
            break;
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
void testcase() {
   int x,y;
   ll c;
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
        cin>>x>>y>>c;
        dsk.push_back({x,y,c});
   }
   BellmanForce();
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

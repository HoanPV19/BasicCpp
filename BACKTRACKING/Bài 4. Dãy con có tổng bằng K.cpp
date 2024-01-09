#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
int cnt=0;
int a[100], b[100];
int ok=0;
void ql(int i, int e, int sum)
{
    if(sum==k)
    {
        sort(b+1,b+e);
        cout<<"[";
        for(int j=1;j<e;j++)
        {
            cout<<b[j];
            if(j!=e-1) 
                cout<<" ";
        }
        cout<<"]\n";
        ok=1;
        return;
    }

    for(int j=i;j<=n;j++)
    {
        if(sum+a[j]<=k)
        {
            b[e]=a[j];
            ql(j, e+1, sum + a[j]);
        }
    }
}
void pro()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    ql(1, 1, 0);
    if(!ok)
        cout<<"-1\n";
}
int main()
{  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
//    cin>>T;
//    while(T--)
    pro();
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k, s;
int cnt=0;
void ql(int i, int plt ,int sum)
{
    if(i==k)
    {
        if(sum==s) 
            ++cnt;
        else 
            return;    
    }
    for(int j=plt;j<=n;j++)
        ql(i+1,j+1,sum+j);
}

void pro()
{
  
    cin>>n>>k>>s;
    ql(0,1,0);
    cout<<cnt;
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

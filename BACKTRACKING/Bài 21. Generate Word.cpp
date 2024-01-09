#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m,ok=0;
int cnt=0;
char a[100][100];
string s;
bool usd[100][100]={};
void ql(int i, int j, int index)
{
    if(index==s.size())
    {
        ok=1;
        return;
    }
    if(!usd[i+1][j]&&i+1<=n&&a[i+1][j]==s[index])
    {
        usd[i+1][j]=true;
        ql(i+1,j,index+1);
        usd[i+1][j]=false;
    }
    if(!usd[i][j+1]&&j+1<=m&&a[i][j+1]==s[index])
    {
        usd[i][j+1]=true;
        ql(i,j+1,index+1);
        usd[i][j+1]=false;
    }
    if(!usd[i-1][j]&&i-1>=1&&a[i-1][j]==s[index])
    {
        usd[i-1][j]=true;
        ql(i-1,j,index+1);
        usd[i-1][j]=false;
    }
        
    if(!usd[i][j-1]&&j-1>=1&&a[i][j-1]==s[index])
    {
        usd[i][j-1]=true;
        ql(i,j-1,index+1);
        usd[i-1][j]=false;
    }
    
}
void pro()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    cin>>s;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==s[0])
            {
                usd[i][j]=true;
                ql(i,j,1);
                usd[i][j]=false;
            }
        }
    if(ok)
        cout<<"YES";
    else 
        cout<<"NO";
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

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
int cnt=0;
int a[100][100];
string s="";
vector <string> okay;
void ql(int i, int j)
{
    if(i==n&&j==n)
        okay.push_back(s);
    if(i+1<=n&&a[i+1][j])
    {
        s+="D";
        a[i+1][j]=0;
        ql(i+1,j);
        a[i+1][j]=1;
        s.pop_back();
    }
    if(j+1<=n&&a[i][j+1])
    {
        s+="R";
        a[i][j+1]=0;
        ql(i,j+1);
        a[i][j+1]=1;
        s.pop_back();
    }
    if(j-1>=1&&a[i][j-1]&&(j-1)*i!=1)
    {
        s+="L";
        a[i][j-1]=0;
        ql(i,j-1);
        a[i][j-1]=1;
        s.pop_back();
    }
    if(i-1>=1&&a[i-1][j]&&(i-1)*j!=1)
    {
        s+="U";
        a[i-1][j]=0;
        ql(i-1,j);
        a[i-1][j]=1;
        s.pop_back();
    }
}

void pro()
{
      cin>>n;
      for(int i=1;i<=n;i++)
          for(int j=1;j<=n;j++)
              cin>>a[i][j];
    ql(1,1);
    if(okay.size()==0)
        cout<<"-1\n";
    else
    {
        sort(okay.begin(), okay.end());
            for(int i=0;i<okay.size();i++)
        cout<<okay[i]<<'\n';
    }
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

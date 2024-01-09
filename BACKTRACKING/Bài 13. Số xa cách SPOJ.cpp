#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m=0,ok,s=0;
int cnt=1e9;
int a[105]={};
int used[100]={};

void ql(int i)
{
	if(i==n+1)
	{
		for(int j=1;j<=n;j++)
			cout<<a[j];
		cout<<'\n';
	}
	for(int j=1;j<=n;j++)
	{
		if(!used[j]&&abs(j-a[i-1])!=1)
		{
			used[j]=1;
			a[i]=j;
			ql(i+1);
			used[j]=0;
		}
	}
}
void pro()
{
    cin>>n;
    a[0]=-1;
    ql(1);
}
int main()
{  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
//    int T;
//    cin>>T;
//    while(T--)
    pro();
}

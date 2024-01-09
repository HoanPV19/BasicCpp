#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m;
int cnt=0;
int cheo1[105]={}, cheo2[105]={}, cot[105]={};
int a[10][10];
void ql(int h, int dem, int sum)
{
    if(dem==n)
	{
		cnt=max(cnt, sum);
		return;
	}
	
	for(int j=1;j<=n;j++)
	{
		if(!cot[j]&&!cheo1[h+j-1]&&!cheo2[n-j+h])
		{
			sum+=a[h][j];
			cot[j]=1;
			cheo1[h+j-1]=1;
			cheo2[n-j+h]=1;
			ql(h+1,dem+1, sum);
			sum-=a[h][j];
			cot[j]=0;
			cheo1[h+j-1]=0;
			cheo2[n-j+h]=0;
		}
	}
}
void pro()
{
    n=8;
    for(int i=1;i<=8;i++)
    	for(int j=1;j<=8;j++)
    		cin>>a[i][j];
    ql(1,0,0);
    cout<<cnt<<'\n';
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

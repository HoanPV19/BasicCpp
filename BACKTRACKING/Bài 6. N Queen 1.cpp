#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m;
int cnt=0;
int cheo1[100]={}, cheo2[100]={}, cot[100]={};
void ql(int h, int dem)
{
    if(dem==n)
	{
		++cnt;
		return;
	}
	
	for(int j=1;j<=n;j++)
	{
		if(!cot[j]&&!cheo1[h+j-1]&&!cheo2[n-j+h])
		{
			cot[j]=1;
			cheo1[h+j-1]=1;
			cheo2[n-j+h]=1;
			ql(h+1,dem+1);
			cot[j]=0;
			cheo1[h+j-1]=0;
			cheo2[n-j+h]=0;
		}
	}
}
void pro()
{
    cin>>n;
    ql(1,0);
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

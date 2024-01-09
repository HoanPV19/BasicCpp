#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m,ok=0;
int cnt=0;
int X[100];
int nt[505];
void sang()
{
	for(int i=1;i<=505;i++)
		nt[i]=1;
	nt[1]=0;
	nt[0]=0;
	for(int i=2;i<=505;i++)
	{
		if(nt[i])
		for(int j=i*i;j<=505;j+=i)
		nt[j]=0;
	}
}
void ql(int pos, int sum, int cnt)
{
    if(sum==0&&cnt==k)
    {
    	ok=1;
    	for(int i=1;i<=k;i++)
    	{
    		cout<<X[i];
    		if(i<k) cout<<" + ";
		}
    	cout<<'\n';
    	return;
	}
	for(int i=pos;i<=n;i++)
	{
		if(nt[i]&&sum-i>=0)
		{
			X[cnt+1]=i;
			ql(i+1,sum-i,cnt+1);
		}
	}
}
void pro()
{
	sang();
    cin>>n>>k;
    ql(1,n, 0);
    if(!ok)
    	cout<<"NOT FOUND";
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

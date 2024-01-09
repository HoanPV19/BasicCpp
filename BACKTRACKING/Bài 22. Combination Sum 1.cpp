#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m,ok=0;
int cnt=0;
int X[100];
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
	for(int i=pos;i<=9;i++)
	{
		if(sum-i>=0)
		{
			X[cnt+1]=i;
			ql(i+1,sum-i,cnt+1);
		}
		else break;
	}
}
void pro()
{
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

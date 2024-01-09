#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m,ok=0;
int s=0;
int a[100];
int used[100]={};
void ql(int somangconcotongbangsumchiak, int sum)
{
    if(somangconcotongbangsumchiak==k)
    {
    	ok=1;
	}
	else if(somangconcotongbangsumchiak>k)
		ok=0;
	for(int i=1;i<=n;i++)
	{
		if(!used[i])
		{
			if(sum+a[i]==s)
			{
				used[i]=1;
				ql(somangconcotongbangsumchiak+1, 0);
				used[i]=0;
				
			}
			else if(sum+a[i]<s)
			{
				used[i]=1;
				ql(somangconcotongbangsumchiak, sum+a[i]);
				used[i]=0;
			}
		}
	}
}
void pro()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	s+=a[i];
	}
	if(s%k!=0)
		cout<<"0\n";
	else 
	{
		s/=k;
		ql(0,0);
		if(ok)
			cout<<"1\n";
		else
			cout<<"0\n";
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

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k,m=0,ok,s=0;
int cnt=1e9;
int a[105]={};
int used[100]={};

void ql(int sum)
{
	if(sum==m/2)
	{
		ok=1;
		return;
	}
	else if(sum<m/2)
		return;
	for(int i=1;i<=n;i++)
		ql(sum-a[i]);
}
void pro()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	m+=a[i];
	}
	if(m%2||n==1)
		cout<<"0\n";
    else 
    {
    	ql(m);
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

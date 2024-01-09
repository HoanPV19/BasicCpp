#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100], n,k,s,cnt, daxet[100];
void in()
{
	int sum=0;
	for(int i=1;i<=k;i++)
	sum+=a[i];
	if(sum==s) ++cnt;
}
void Try(int i)
{
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
			a[i]=j;
			daxet[j]=1;
			if(i==k)
			{
				in();
			}
			else Try(i+1);
	}
}


void pro()
{
	cin>>n>>k>>s;
	cnt=0;
	a[0]=0;
	memset(daxet, 0, sizeof(daxet));
	Try(1);
	cout<<cnt<<'\n'; 
	
}
int main()
{  
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin>>T;
	while(T--)
		pro();
	
}






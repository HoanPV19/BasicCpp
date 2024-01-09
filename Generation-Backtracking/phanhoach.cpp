#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int n;
void ktao()
{
	a[1]=n;
}
int ok, cnt;
void sinh()
{
	int i=cnt;
	while(i>=1&&a[i]==1)
	{
		 --i;
	}
	if(i==0) ok=0;
	else 
	{
		--a[i];
		int d=cnt-i+1;
		cnt=i;
		int e=d/a[i];
		int r=d%a[i];
		for(int j=0;j<e;j++)
		{
			++cnt;
			a[cnt]=a[i];
		}
		if(r)
		{
			++cnt;
			a[cnt]=r;
		}
	}
}
void pro()
{
	cin>>n;
	ok=1;
	cnt=1;
	ktao();
	while(ok)
	{
		for(int i=1;i<=cnt;i++)
		cout<<a[i]<<" ";
		cout<<'\n';
		sinh();
	}
	cout<<'\n';
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
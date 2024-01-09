#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int n,k, ok=1;
void tao()
{
	for(int i=1;i<=k;i++)
	a[i]=i;
}
void sinh()
{
	int i=k;
	while(i>=1&&a[i]==n-k+i)
	{
		--i;
	}
	if(i==0) ok=0;
	else 
	{
		++a[i];
		if(i!=k)
		for(int j=i+1;j<=k;j++)
		a[j]=a[j-1]+1;
	}
}
void pro()
{
	cin>>n>>k;
	tao();
	ok=1;
	while(ok)
	{
		for(int i=1;i<=k;i++)
		cout<<a[i];
		cout<<' ';
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int n;
void tao()
{
	for(int i=1;i<=n;i++)
	a[i]=i;
}
int ok;
void sinh()
{
	int i=n-1;
	while(i>=1&&a[i]>a[i+1])
	{
		--i;
	}
	if(i==0)
	{
		ok=0;
	}
	else 
	{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		int l=i+1, r=n;
		while(l<r)
		{
			swap(a[l],a[r]);
			++l; --r;
		}
	}
}

void pro()
{
	cin>>n;
	tao();
	ok=1;
	while(ok)
	{
		for(int i=1;i<=n;i++)
		cout<<a[i];
		cout<<" ";
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
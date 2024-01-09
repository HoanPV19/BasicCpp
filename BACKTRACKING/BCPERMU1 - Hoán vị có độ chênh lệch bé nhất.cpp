#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int a[10], used[10]={};
int n, k;
int res=1e9;
vector <string> v;
void update()
{
	int mx=0, mi=1e9;
	for(int i=0;i<v.size();i++)
	{
		int tmp=0;
		for(int j=0;j<k;j++)
			tmp=tmp*10+v[i][a[j]];
		mx=max(mx,tmp);
		mi=min(mi,tmp);
	}
	res=min(mx-mi,res);
}
void Try(int i)
{
	if(i==k)
	{
		update();
		return;
	}
	for(int j=0;j<k;j++)
	{
		if(!used[j])
		{
			used[j]=1;
			a[i]=j;
			Try(i+1);
			used[j]=0;
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<k;i++)
		a[i]=i;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	Try(0);
	cout<<res;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
   int n, m;
	cin>>n>>m;
	int a[n+1][m+1];
	int cmax=0, cnt=0;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==0)
				continue;
			if(a[i][j])
			{
				a[i][j]=min({a[i-1][j-1],a[i-1][j],a[i][j-1]})+1;
			}
			if(a[i][j]>cmax)
			{
				cmax=a[i][j];
				cnt=1;
			}
			else if(a[i][j]==cmax)
				++cnt;
		}
	cout<<cmax<<" "<<cnt<<'\n';
}

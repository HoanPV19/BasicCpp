#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[105][105];
int n, m, y, x, ans=0;
void Try(int y, int x)
{
	if(y>=n||x>=m||x<0||y<0)
		return;
	if(a[y][x]==0)
	{
		++ans;
		a[y][x]=1;
	}
	else if(a[y][x]==1)
		return;
	Try(y+1,x);
	Try(y-1,x);
	Try(y,x+1);
	Try(y,x-1);
}
void pro()
{

	cin>>n>>m>>y>>x;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	Try(y-1,x-1);
	cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pro();
}

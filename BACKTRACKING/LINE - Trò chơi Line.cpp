#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,ok=0,dy,dx;
int a[11][11];
void Try(int sy, int sx)
{
	if(ok||a[sy][sx]||sy<1||sx<1||sy>n||sx>n)
		return;
	if(sy==dy&&sx==dx)
	{
		ok=1;
		return;
	}
	a[sy][sx]=1;
	Try(sy+1,sx);
	Try(sy-1,sx);
	Try(sy,sx+1);
	Try(sy,sx-1);
}
void pro()
{
	int sy, sx;
	cin>>n>>sy>>sx>>dy>>dx;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	a[sy][sx]=0;
	Try(sy,sx);
	if(ok)
		cout<<"YES\n";
	else 
		cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pro();
}

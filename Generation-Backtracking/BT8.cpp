#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100][100], n,m,cnt;
void ql(int i, int j)
{
	if(i==n||j==m) return;
	if(i==n-1&&j==m-1)
	{
		++cnt;
		return;
	}
	ql(i+1,j);
	ql(i,j+1);
}
void pro()
{
	cin>>n>>m;
	cnt=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
	ql(0,0);
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






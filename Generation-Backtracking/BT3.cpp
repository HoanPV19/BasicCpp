#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, a[100][100];
void Try(int hang)
{
	if(hang==0) return;
	for(int i=1;i<=hang;i++)
	a[hang][i]=a[hang+1][i]+a[hang+1][i+1];
	Try(hang-1);
}
void pro()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[n][i];
	Try(n-1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		cout<<a[i][j]<<" ";
		cout<<'\n';
	}
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






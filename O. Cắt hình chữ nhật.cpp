#include<bits/stdc++.h>
using namespace std;
int f[502][502];
int xl(int n, int m)
{
	if(n==m)
		return 0;
	if(f[n][m]!=-1)
		return f[n][m];
	int &ans=f[n][m];
	ans=1e9;
	for(int i=1;i<n;i++)
		ans=min(ans,xl(i,m)+xl(n-i,m)+1);
	for(int i=1;i<m;i++)
		ans=min(ans,xl(n,i)+xl(n,m-i)+1);
	return ans;
}
int main() {
   int n, m;
   cin>>n>>m;
   memset(f,-1,sizeof(f));
   cout<<xl(n,m);
}

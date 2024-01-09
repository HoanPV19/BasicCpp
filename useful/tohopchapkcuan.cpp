#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=1e9+7;
ll a[1001][1001];
ll C(int n, int k)
{
	if(k>n-k)
	k=n-k;
	if(a[n][k]!=0)
		return a[n][k];
	else if(k==1)
	a[n][k]=n;
	else if(k==0)
	a[n][k]=1;
	else a[n][k]=C(n-1,k-1)+C(n-1,k);
	a[n][k]%=MOD;
	return a[n][k];
}
void pro()
{
	int n,k;
	cin>>n>>k;
	cout<<C(n,k)<<endl;
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
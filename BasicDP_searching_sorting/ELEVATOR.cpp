#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e5;
const ll mod = 1e9+7;
bool cmp(pair<int,int> a, pair<int,int> b)
{
	return a.first<b.first;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int a[n+1];
	ll cost=0;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,greater <int>());
	for(int i=1;i<=n;i+=k)
	{
		cost+=2*(a[i]-1);
	}
	cout<<cost;
	
}
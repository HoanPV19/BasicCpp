#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, m, s, A, B;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>m>>s>>A>>B;
    int a[n], b[m];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    for(int i=0;i<m;i++)
    	cin>>b[i];
    sort(a,a+n, greater<int>());
    sort(b,b+m, greater<int>());
    ll ans=0;
    int r=min(n, s/A);
	int chiphi=r*A;
    for(int i=0;i<r;i++)
    	ans+=a[i];
    ll cur=ans;
    for(int l=0; l<min(m,s/B);l++)
    {
    	chiphi+=B;
    	cur+=b[l];
    	while(chiphi>s)
    	{
    		chiphi-=A;
    		cur-=a[--r];
		}
		ans=max(ans, cur);
	}
	cout<<ans<<'\n';
}

// https://codeforces.com/gym/102961/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
   int n,m,k,res=0;
   cin>>n>>m>>k;
   int a[n], b[m];
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=0;i<m;i++)
   cin>>b[i];
   sort(a,a+n);
   sort(b,b+m);
   for(int i=0,j=0;i<n&&j<m;)
   {
   		if(abs(a[i]-b[j])<=k)
   		{
   			++res;
   			++i; ++j;
		}
		else if(b[j]<a[i]) ++j;
		else ++i;
   }
   cout<<res;
}
   
	
	
	

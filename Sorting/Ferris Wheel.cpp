// https://codeforces.com/gym/102961/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
   int n,x,res=0;
   cin>>n>>x;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   sort(a,a+n);
   int l=0, r=n-1;
   while(l<=r)
   {
   		if(a[l]+a[r]<=x&&l!=r)
   		{
   			++res;
   			++l;
   			--r;
		}
		else 
		{
			--r;
			++res;
		}
   }
   cout<<res;
}
   
	
	
	

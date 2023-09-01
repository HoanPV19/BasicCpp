// https://codeforces.com/gym/102961/problem/X
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;
   cin>>n>>x;
   vector <pair <int, int>> a(n);
   for(int i=0;i<n;i++)
   {
   		cin>>a[i].first;
   		a[i].second=i;
   }
   sort(a.begin(),a.end());
   for(int i=0;i<n-2;i++)
   {
   	 int l=i+1, r=n-1;
   	 while(l<r)
   		{
   	 		if(a[l].first+a[r].first+a[i].first==x)
   	 		{
   	 			cout<<a[l].second+1<<" "<<a[r].second+1<<" "<<a[i].second+1<<endl;
   	 			return 0;
			}
			else if(a[l].first+a[r].first+a[i].first<x) ++l;
			else --r;
		}
   }
   cout<<"-1";
}
	
	

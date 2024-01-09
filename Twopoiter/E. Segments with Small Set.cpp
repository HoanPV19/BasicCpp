#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int N, k;
    cin>>N>>k;
    int a[N+1];
    a[0]=0;
    for(int i=1;i<=N;i++)
    	cin>>a[i];
    int cnt[100005]={};
	ll len=0;
	int sum=0;
	int l=1, r=1;
	for(int r=1;r<=N;r++)
	{
		if(!cnt[a[r]])
			++sum;
		++cnt[a[r]];
		while(sum>k)
		{
			if(cnt[a[l]]==1)
			{
				--sum;
				--cnt[a[l]];
			}
			else 
				--cnt[a[l]];
			++l;
		}
		len+=r-l+1;
	}
	cout<<len<<'\n';
}

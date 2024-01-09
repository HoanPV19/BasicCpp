#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int N, k;
    cin>>N>>k;
    int a[N+1];
    for(int i=1;i<=N;i++)
    	cin>>a[i];
    ll coupe=0;
    int l=1;
    for(int r=2;r<=N;r++)
    {
    	while(a[r]-a[l]>k)
    		++l;
    	coupe+=l-1;
	}
	cout<<coupe;
}

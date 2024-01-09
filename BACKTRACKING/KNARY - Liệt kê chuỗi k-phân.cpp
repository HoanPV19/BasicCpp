#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[30];
void Try(int i, int k, int n)
{
	if(i==n)
	{
		for(int j=0;j<n;j++)
			cout<<a[j];
		cout<<'\n';
	}
	else 
		for(int j=1;j<=k;j++)
		{
			a[i]=j;
			Try(i+1, k , n);
		}
}
void pro()
{
	int k, n;
	cin>>k>>n;
	cout<<(ll)pow(k,n)<<'\n';
	Try(0,k,n);
	
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pro();
}

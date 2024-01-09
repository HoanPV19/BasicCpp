#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100],X[100], n,k, s,used[100];
void Try(int i,int k, int sum)
{
	if(sum==s)
	{
		for(int j=1;j<k;j++)
		cout<<X[j]<<" ";
		cout<<'\n';
		return;
	}
	for(int j=i;j<=n;j++)
	{
		if(sum+a[j]<=s)
		{
			used[j]=1;
			X[k]=a[j];
			Try(j+1, k+1,sum+a[j]);
		}
	}
}


void pro()
{
	cin>>n>>s;
	memset(used, 0, sizeof(used));
	for(int i=1;i<=n;i++)
	cin>>a[i];
	Try(1,1,0);
	
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






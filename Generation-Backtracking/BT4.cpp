#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100], n,k,cnt, daxet[100];
string s,tmp;
void Try(int i)
{
	for(int j=0;j<n;j++)
	{
		if(daxet[j]==0)
		{
			daxet[j]=1;
			tmp[i]=s[j];
			Try(i+1);
			daxet[j]=0;
		}
	}
	if(i==n) 
	{
		cout<<tmp<<'\n';
		return;
	}
}


void pro()
{
	memset(daxet, 0, sizeof(daxet));
	cin.ignore();
	cin>>s;
	n=s.size();
	tmp=s;
	Try(0);
	
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






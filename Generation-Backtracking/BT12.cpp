#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, p ,s, idx=1;
int I,X[100];
vector <int> a;
int Bs(int l, int r, int p)
{
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]==p) return mid;
		else if(a[mid]<p) l=mid+1;
		else r=mid-1; 
	}
	return 0;
}

void tinh()
{
	a.push_back(2);
	for(int i=3;i<=210;i+=2)
	{
		int ok=1;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0) 
			{
				ok=0;
				break;
			}
		}
		if(ok) a.push_back(i);
	}
}
vector <vector <int>> kq;

void ql(int i, int k, int sum)
{
	if(k==n&&sum==s)
	{
		vector <int> x(X,X+n);
		kq.push_back(x);
	}
	else if(k>=n) return;
	for(int j=i;j<a.size();j++)
	{
		if(sum+a[j]<=s)
		{
			X[k]=a[j];
			ql(j+1,k+1,sum+a[j]);
		}
		else break;
	}
}
void pro()
{
	kq.clear();
	cin>>n>>p>>s;
	I=Bs(0,a.size()-1,p)+1;
	ql(I,0,0);
	cout<<kq.size()<<'\n';
	for(int i=0;i<kq.size();i++)
	{
		for(int j=0;j<n;j++)
		cout<<kq[i][j]<<" ";
		cout<<'\n';
	}
}
int main()
{  
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin>>T;
	tinh();
	while(T--)
		pro();
	
}






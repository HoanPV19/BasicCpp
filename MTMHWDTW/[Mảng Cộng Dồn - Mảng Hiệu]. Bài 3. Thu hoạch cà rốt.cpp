#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main()
{
	int h,c,t;
	cin>>h>>c;
	int a[h+1][c+1];
	for(int i=0;i<=h;i++)
		a[i][0]=0;
	for(int i=0;i<=c;i++)
		a[0][i]=0;
	for(int i=1;i<=h;i++)
		for(int j=1;j<=c;j++)
			cin>>a[i][j];
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=c;j++)
			a[i][j]=a[i][j]+a[i][j-1]+a[i-1][j]-a[i-1][j-1];
	}
	cin>>t;
	int x1,x2,y1,y2;
	while(t--)
	{
		cin>>x1>>x2>>y1>>y2;
		cout<<a[x2][y2]-a[x2][y1-1]-a[x1-1][y2]+a[x1-1][y1-1]<<'\n';
	}
}

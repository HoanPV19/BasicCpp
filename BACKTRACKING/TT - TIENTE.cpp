#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector <int> v;
vector <vector<int>> vv;
int a[30], sum=0;
void Try(int pos, int tmp)
{
	if(tmp==sum/2)	
		vv.push_back(v);
	for(int i=pos;i<n;i++)
	{
		if(tmp+a[i]<=sum/2)
		{
			v.push_back(i);
			Try(i+1,tmp+a[i]);
			v.pop_back();
		}
	}
}
void pro()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%2||n==1)
	{
		cout<<"khong chia duoc\n";
	}
	else
	{
		Try(0,0);
		if(vv.size()==0)
			cout<<"khong chia duoc\n";
		else
		{
			vector <string> ss;
			cout<<vv.size()<<'\n';
			for(int i=0;i<vv.size();i++)
			{	
				string s=string(n,'B');
				for(int j=0;j<vv[i].size();j++)
					s[vv[i][j]]='A';
				ss.push_back(s);
			}
			sort(ss.begin(), ss.end());
			for(int i=0;i<ss.size();i++)
			{
				for(int j=0;j<ss[i].size();j++)
					cout<<ss[i][j]<<" ";
				cout<<'\n';
			}		
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pro();
}

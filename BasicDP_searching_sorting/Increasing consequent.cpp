#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
int main()
{  
	int n,x;
	cin>>n;
	multiset <int> v;
	for(int i=0;i<n;i++)
	{
		// neu truoc x co phan tu lon hon x thi loai bo no ra khoi day
		// day nay luu lai cac so be nhat co the theo thu tu tang dan
		cin>>x;
		v.insert(x);
		auto it=v.lower_bound(x);
		++it;
		if(it!=v.end())
			v.erase(it);
	}
	
	cout<<v.size();
	
}
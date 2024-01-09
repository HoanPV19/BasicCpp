#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n, k;
	cin>>n>>k;
	vector <int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	multiset <int> s(v.begin(), v.begin()+k);
	auto it=next(s.begin(),k/2);
	for(int i=k;i<=n;i++)
	{
		if(k%2)
			cout<<*it<<" ";
		else
			cout<<*(prev(it))<<" ";
		if(i==n)
			break;
		s.insert(v[i]);
		if(v[i]<*it)
			--it;
		if(v[i-k]<=*it)
			++it;
		s.erase(s.find(v[i-k]));
	}
		
}

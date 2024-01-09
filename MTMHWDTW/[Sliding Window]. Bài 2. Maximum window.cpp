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
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	multiset <int> se;
	for(int i=0;i<k;i++)
		se.insert(a[i]);
	cout<<*se.begin()<<" "<<*se.rbegin()<<'\n';
	for(int i=k;i<n;i++)
	{
		se.insert(a[i]);
		se.erase(se.find(a[i-k]));
		cout<<*se.begin()<<" "<<*se.rbegin()<<'\n';
	}
		
}

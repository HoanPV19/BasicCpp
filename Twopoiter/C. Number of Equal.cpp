#include <bits/stdc++.h>
using namespace std;


int main() {
    int N, M,k;
    cin>>N>>M;
    map <int, long long> x,y;
    for(int i=0;i<N;i++)
    {
    	cin>>k;
    	++x[k];
	}
    for(int i=0;i<M;i++)
    {
    	cin>>k;
    	++y[k];
	}
	long long cnt=0;
	for(auto m:x)
		cnt+=m.second*y[m.first];
	cout<<cnt<<'\n';
}

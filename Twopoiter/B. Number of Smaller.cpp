#include <bits/stdc++.h>
using namespace std;


int main() {
    int N, M;
    cin>>N>>M;
    int a[N+1], b[M];
    for(int i=0;i<N;i++)
    	cin>>a[i];
    for(int i=0;i<M;i++)
    	cin>>b[i];
    int L1=0, L2=0;
    while(L2<M)
    {
    	if(b[L2]>a[L1])
    		while(L1<N&&b[L2]>a[L1]) 
    			++L1;
    	cout<<L1<<" ";
    	++L2;
	}
}

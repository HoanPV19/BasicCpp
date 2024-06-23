#include <bits/stdc++.h>
using namespace std;
struct w
{
    int val, cur;
};
bool cmp(w a, w b)
{
    return (double)a.val/a.cur>(double)b.val/b.cur;
}
int n;
int BT(w a[], int b, int sum , int i)
{
    if(b<0)
    	return 0;
    if(i==n)
    	return sum;
	int l=BT(a,b-a[i].cur,sum+a[i].val, i+1);
	int r=BT(a,b,sum, i+1);
	return max(l,r);
}
int main()
{
    int b;
    cin>>n>>b;
    w a[n];
    for(int i=0;i<n;i++)
        cin>>a[i].cur>>a[i].val;
    sort(a, a+n, cmp);
    cout<<BT(a,b,0,0);
    return 0;
}

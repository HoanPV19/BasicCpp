// https://codeforces.com/gym/102961/problem/K
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	set <int> se;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(se.find(a[i]-1)!=se.end())
		{
			se.erase(a[i]-1);
			se.insert(a[i]);
		}
		else se.insert(a[i]);
	}
	cout<<se.size();
}

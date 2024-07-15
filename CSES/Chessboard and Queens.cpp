#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool visited[9];
char dcm[9][9];
bool X[20], Y[20];
void nhap()
{
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++)
			cin >> dcm[i][j];
}
int res = 0;
void Try(int y)
{
	if (y == 9)
	{
		++res;
		return;
	}
	for (int x = 1; x <= 8; x++)
	{
		if (!X[x + y - 1] && !Y[8 + x - y] && !visited[x] && dcm[x][y] != '*')
		{
			X[x + y - 1] = Y[8 + x - y] = visited[x] = true;
			Try(y + 1);
			X[x + y - 1] = Y[8 + x - y] = visited[x] = false;
		}
	}
}
int main()
{
	int t = 1;
	// cin>>t;
	while (t--)
	{

		for (int i = 1; i <= 8; i++)
			Y[i] = X[i] = visited[i] = false;
		nhap();
		Try(1);
		cout << res << '\n';
	}
}
#include <iostream>
#include <vector>
using namespace std;

void Try(string s, int open, int close, int N)
{
	if(close == N)
		cout<<s<<'\n';
	else
	{
		if(open>close)
			Try(s+")", open, close + 1, N);
		if(open < N)
			Try(s+"(", open + 1, close, N);
	}
}
int main() {
    int N ;
    cin>>N;
    Try("", 0, 0, N);
    return 0;
}

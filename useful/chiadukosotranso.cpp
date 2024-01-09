#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll mulmod(ll a, ll b, ll c) {
    ll x = 0, y = a%c;
    while (b > 0) {
        if (b % 2 == 1) {
            x = (x + y) % c;
        }
        y = (y * 2) % c;
        b /= 2;
    }
    return x % c;
}
//Lý do khi b lẻ thì cộng y vào x là do cách biểu diễn số b dưới dạng nhị phân.
//Khi chúng ta nhân a với b, chúng ta có thể xem b như là một chuỗi các bit. Mỗi bit trong b tương ứng với một lượng a nhân với một lũy thừa của 2 (tức là a∗2^i).
//Khi b lẻ, bit cuối cùng của nó trong biểu diễn nhị phân là 1, nghĩa là chúng ta cần cộng thêm a vào kết quả cuối cùng. Trong thuật toán, giá trị này được biểu diễn bởi y.
//Sau đó, chúng ta tiếp tục dịch phải b (tức là chia b cho 2) và nhân đôi a (tức là nhân y với 2) cho đến khi b bằng 0. Mỗi lần b lẻ, chúng ta lại cộng thêm y vào x.
//Vì vậy, thuật toán này giống như việc thực hiện phép nhân thông thường dựa trên biểu diễn nhị phân của số b.
void pro()
{
	ll a, b, c;
	cin>>a>>b>>c;
	cout<<mulmod(a,b,c)<<endl;
}
int main()
{  
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin>>T;
	while(T--)
	pro();
}
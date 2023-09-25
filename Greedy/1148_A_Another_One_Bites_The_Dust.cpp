#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	ll a, b, c;
	cin >> a >> b >> c;
	ll less;
	ll ans;
	if (a == b) {
		ans = c * 2 + a + b;
	}
	else {
		less = a > b ? b : a;
		ans = c * 2 + less * 2 + 1;
	}
	cout << ans << endl;
}

int main()
{
        Solution();
    	return 0;
}

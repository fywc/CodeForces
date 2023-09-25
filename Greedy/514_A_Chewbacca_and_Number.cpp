#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	ll n;
	cin >> n;
	ll x;
	ll ans = 0;	
	string s = "";
	while(n != 0 ) {
		x = n % 10;
		ans *= 10;
		ans += ((9 - x) < x ? (9 - x) : x);
		s += (((9 - x) < x ? (9 - x) : x) + '0');
		n /= 10;
	}
	if (ans % 10 == 0)
		ans += 9;

	reverse(s.begin(), s.end());
	if (s[0] == '0') {
		s[0] = '9';
	}
	cout << s << endl;
	
	ll reserved_ans = 0;
	while (ans != 0) {
		int digit = ans % 10;
		reserved_ans = reserved_ans * 10 + digit;
		ans /= 10;
	}
		
	// cout << reserved_ans << endl;

	return ;
}

int main()
{
        Solution();
    	return 0;
}

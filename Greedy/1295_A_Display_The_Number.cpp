#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	ll n;
	ll cnt, k, sum;
	cnt = 0;
	k = 0;
	sum = 0;
	string s, s1;

	cin >> n;
	if (n % 2 && n >= 3) {
		s += '7';
		n -= 3;
	}

	while (n > 1 && n % 2 == 0)
	{
		s1 += '1';
		n -= 2;
	}

	s += s1;
	cout << s << endl;

	return ;
}

int main()
{
    	int T;
    	cin >> T;
    	while(T--) {
        	Solution();
    	}
    	return 0;
}

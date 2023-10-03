#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	ll n;
	string s;
	cin >> n >> s;
	ll k, p, cnt;
	k = n - 11;
	p = k / 2;
	cnt = 0;
	for (int i = 0; i < k + 1; i++) {
		if (s[i] == '8')
			cnt++;
	}

	if (cnt > p) 
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return ;
}

int main()
{
        Solution();
    	return 0;
}

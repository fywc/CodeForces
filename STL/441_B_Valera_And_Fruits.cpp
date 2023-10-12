#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	ll n, v, temp;
	cin >> n >> v;
	ll count = 0;
	map<ll, ll> mp;
	
	for (int i = 0; i < 3001; i++)
		mp[i] = 0;
	
	for (int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		mp[a] += b;
	}

	ll ager, ajke;
	for (int i = 0; i < 3001; i++) {
		ager = i - 1;
		ajke = i;

		if (mp[ager] > v)
			count += v;
		else {
			count += mp[ager];
			temp = v - mp[ager];

			if (temp > mp[ajke]) {
				count += mp[ajke];
				mp[ajke] = 0;
			}
			else {
				count += temp;
				mp[ajke] -=temp;
			}
		}
	}
	cout << count << endl;

	return ;
}

int main()
{
        Solution();
    	return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
        ll n;
        cin >> n;
	map<ll, ll> num;
	ll ans = 0;
	for (ll i = 1; i <= n; i++) {
		ll temp;
		cin >> temp;
		num[temp - i]++;
	}
	for (auto it=num.begin(); it != num.end(); it++) {
		ll t = it->second;
		ans += (t - 1) * t / 2;
	}
	cout << ans << endl;
			
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

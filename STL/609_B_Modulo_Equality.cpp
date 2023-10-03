#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n, m;
	ll x;
	cin >> n >> m;
	ll ans = 1e18;
	// vector<ll> a(n + 1), b(n + 1), c(n + 1);
	ll a[n + 1], b[n + 1], c[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	sort(b + 1, b + 1 + n);
	for (int i = 1; i <=n; i++) {
		ll x;
		x = (a[1] <= b[i]) ? (b[i] - a[1]) : (b[i] + m - a[1]);
		for (int j = 1; j <= n; j++) {
			c[j] = (a[j] + x) % m;
		}
		sort(c + 1, c + 1 + n);
		bool flag = true;
		for (int j = 1; j <= n; j++) {
			if (c[j] != b[j]) {
				flag = false;
				break;
			}
		}
		if (flag) 
			ans = min(ans, x);
	}
	cout << ans << endl;
	return ;
}

int main()
{
        Solution();
    	return 0;
}

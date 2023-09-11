#include <bits/stdc++.h>

#define ll long long

using namespace std;

void Solution()
{
    int n, q;
    cin >> n >> q;
    ll a[n + 1];
    ll sum[n + 1];
    ll x;
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
            cin >> x;
            a[i] = x & 1;
            sum[i] = sum[i - 1] + a[i];
    }
    for (int i = 0; i < q; i++) {
	bool flag = false;
	ll l, r, k;
	cin >> l >> r >> k;

    
	// ll sum = 0;
	ll sum_part_before = sum[r] - sum[l - 1];
	ll sum_part_after = 0;

    /*
	for (int j = 1; j <= n; j++) {
	    sum += a[j];
	}
    */

    /*
	for (int j = l; j <= r; j++) {
	    sum_part_before += a[j];
	}
    */

	sum_part_after = (r - l + 1) * (k & 1);

	sum[n] &= 1;
	sum_part_before &= 1;
	sum_part_after &= 1;

	if (sum[n] == 1) {
	    if (sum_part_before == sum_part_after) {
	        flag = true;
	    }
	}
	else {
	    if (sum_part_before != sum_part_after) {
	        flag = true;
	    }
	}

	string ans = flag ? "YES" : "NO";
	cout << ans << endl;
    }



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


#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	ll ans1 = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
	ll ans2 = a[0] * a[1] * a[n - 1] * a[n - 2] * a[n -3];
	ll ans3 = a[0] * a[1] * a[2] * a[3] * a[n - 1];
	
	cout << max(ans1, max(ans2, ans3)) << endl;

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

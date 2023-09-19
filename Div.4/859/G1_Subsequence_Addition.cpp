#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	if (a[0] != 1) {
		cout << "NO" << endl;
		return ;
	}
	
	vector<int> dp(5005, 0);
	dp[1] = 1;
	for (int i = 1; i < n; i++) {
		if (!dp[a[i]]) {
			cout << "NO" << endl;
			return ;
		}
		//　j 位置的值可以用j - a[i]位置的值更新
		for (int j = 5000; j >= a[i]; j--) {
			dp[j] |= dp[j - a[i]];
		}
	}
	cout << "YES" << endl;
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

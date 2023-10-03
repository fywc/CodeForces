#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<vector<int>> vals(2e5+11);
	for(int i = 0; i < n; i++) {
		int x = a[i];
		int cur = 0;
		while (x > 0) {
			vals[x].push_back(cur);
			cur++;
			x /= 2;
		}
	}

	int ans = 1e9;
	for (int i = 0; i < 2e5; i++) {
		sort(vals[i].begin(), vals[i].end());
		if ((int)vals[i].size() < k) {
			continue;
		}
		ans = min(ans, accumulate(vals[i].begin(), vals[i].begin() + k, 0));
	}
	cout << ans << endl;


	return ;
}

int main()
{
        Solution();
    	return 0;
}

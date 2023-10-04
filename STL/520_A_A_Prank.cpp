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
	int max_len = 0;
	if (a[0] == 1) {
		int temp = 0;
		for (int i = 1; i < n; i++) {
			if (a[i] - a[i - 1] == 1) {
				temp++;
			}
			else {
				break;
			}
		}
		max_len = max(max_len, temp);
	}
	if (a[n - 1] == 1000) {
		int temp = 0;
		for (int i = n - 2; i >= 0; i--) {
			if (a[i + 1] - a[i] == 1) {
				temp++;
			}
			else {
				break;
			}
		}
		max_len = max(max_len, temp);
	}
	map<int, int> cnt;
	int c = 0;
	cnt[0] = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] - a[i - 1] == 1) {
			cnt[c]++;
		}
		else {
			c++;
			cnt[c] = 1;
		}
	}
	for (auto it = cnt.begin(); it != cnt.end(); it++) {
		max_len = max(max_len, it->second - 2);
	}
	cout << max_len << endl;

	return ;
}

int main()
{
        Solution();
    	return 0;
}

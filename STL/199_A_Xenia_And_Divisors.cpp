#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	map<int, int> a;
	cin >> n;
	int x;
	for (int i = 1; i <= 7; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		a[x]++;
	}
	if (a[7] > 0 || a[5] > 0 ) {
		cout << -1 << endl;
		return ;
	}

	bool ok = true;
	vector<vector<int>> ans;
	if (a[4] > 0) {
		int len = a[4];
		a[4] -= len;
		a[2] -= len;
		a[1] -= len;
		for (int i = 0; i < len; i++) {
			vector<int> t {1, 2, 4};
			ans.push_back(t);
		}
	}
	if (a[3] > 0) {
		int len = a[3];
		a[6] -= len;
		a[3] -= len;
		a[1] -= len;
		for (int i = 0; i < len; i++) {
			vector<int> t {1, 3, 6};
			ans.push_back(t);
		}
	}
	if (a[6] > 0) {
		int len = a[6];
		a[6] -= len;
		a[2] -= len;
		a[1] -= len;
		for (int i = 0; i < len; i++) {
			vector<int> t {1, 2, 6};
			ans.push_back(t);
		}
	}
	for (auto it = a.begin(); it != a.end(); it++) {
		if (it->second != 0) {
			ok = false;
			break;
		}
	}
	if (ok) {
		for (int i = 0; i < ans.size(); i++) {
			for (int j = 0; j < 2; j++) {
				cout << ans[i][j] << " ";
			}
			cout << ans[i][2] << endl;
		}
	}
	else {
		cout << -1 << endl;
	}

	return ;
}

int main()
{
        Solution();
    	return 0;
}

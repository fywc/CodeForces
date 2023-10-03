#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> p(n + 1);
	vector<int> s(n + 1);
	vector<int> c(k + 1);
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}
	for (int i = 1; i <= k; i++) {
		cin >> c[i];
	}
	map<int, int> chose;
	for (int i = 1; i <= n; i++) {
		auto pos = chose.find(s[i]);
		if (pos != chose.end()) {
			chose[s[i]] = max(chose[s[i]], p[i]);
		}
		else {
			chose[s[i]] = p[i];
		}
	}
	for (int i = 1; i <= k; i++) {
		if (chose[s[c[i]]] != p[c[i]]) {
			ans++;
		}
	}
	cout << ans << endl;
	return ;
}

int main()
{
        Solution();
    	return 0;
}

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
	ll sum = a[0];	
	for (int i = 1; i < n; i++) {
		if (sum < a[i]) {
			cout << "NO" << endl;
			return ;
		}
		sum += a[i];
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

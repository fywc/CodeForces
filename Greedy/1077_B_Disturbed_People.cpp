#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 2; i < n; i += 1) {
		if (a[i - 1] == 1 && a[i + 1] == 1 && a[i] == 0) {
			a[i + 1] = 0;
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

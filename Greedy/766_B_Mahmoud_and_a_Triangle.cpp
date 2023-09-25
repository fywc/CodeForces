#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	int a[n];
	string ans = "NO";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n - 2; i++) {
		if (a[i] + a[i + 1] > a[i + 2]) {
			ans = "YES";
			break;
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

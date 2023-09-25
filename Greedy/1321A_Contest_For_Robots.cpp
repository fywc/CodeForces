#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	int r[n], b[n];
	int ans;
	for (auto &i: r) {
		cin >> i;
	}
	for (auto &i: b) {
		cin >> i;
	}
	int r_win = 0;
	int b_win = 0;
	for (int i = 0; i < n; i++) {
		if (r[i] > b[i])
			r_win++;
		else if (r[i] < b[i])
			b_win++;
	}	
	float ans_1 = (float)b_win / r_win;
	if (r_win > b_win) {
		ans_1 = 1.0;
		ans = 1;
		cout << ans << endl;
		return ;
	}
	if ((b_win == 0 && r_win == 0) || (r_win == 0)) {
		ans_1 = 0.0;
	}
	if (fmod(ans_1, 1.0) > 0.0) {
		ans = ceil(ans_1);
	}
	else {
		ans = (int)ans_1 + 1;
	}
	if (ans == 1) {
		ans = -1;
	}
	cout << ans << endl;

	return ;
}

int main()
{
        Solution();
    	return 0;
}

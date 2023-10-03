#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n, m;
	cin >> n >> m;
	int x_o, x_e;
	int y_o, y_e;
	x_o = 0;
	x_e = 0;
	y_o = 0;
	y_e = 0;
	int ans = 0;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp & 1) 
			x_o++;
		else
			x_e++;
	}
	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (temp & 1)
			y_o++;
		else
			y_e++;
	}
	ans += (x_o > y_e) ? y_e : x_o;
	ans += (x_e > y_o) ? y_o : x_e;
	cout << ans << endl;

	return ;
}

int main()
{
        Solution();
    	return 0;
}

#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 5;

struct point {
	int x;
	int y;
};

struct point p[maxn];

/*
void Solution()
{
	int n;
	int res = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p[i].x >> p[i].y;	
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int abs_x1 = abs(p[i].x);
			int abs_y1 = abs(p[i].y);
			int abs_x2 = abs(p[j].x);
			int abs_y2 = abs(p[j].y);
			float tan1 = (float)abs_y1 / (float)abs_x1;
			float tan2 = (float)abs_y2 / (float)abs_x2;
		  	if (tan1 == tan2) {
				res += 2;
			}
			float tan = ((float)p[i].y - (float)p[j].y) / ((float)p[i].x - (float)p[j].x); 
			if (tan == -1.0 || tan == 1.0 || p[i].y == p[j].y || p[i].x == p[j].x) {
				res += 2;
			}
		}
	}
	cout << res << endl;
	return ;

}
*/

void Solution()
{
	int n;
	long long  ans = 0;
	long long x, y;
	cin >> n;
	map<long long, long long> mp[4];
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		mp[0][x + y]++;
		mp[1][y - x]++;
		mp[2][x]++;
		mp[3][y]++;
	}
	for (int i = 0; i < 4; i++) {
		for (auto [a, b] : mp[i]) {
			ans += b * (b - 1);
		}
	}
	cout << ans << endl;
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

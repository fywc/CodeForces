#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct point {
	int x;
	int y;
};

void Solution()
{
	int n;
	struct point s;
	cin >> n >> s.x >> s.y;
	vector<struct point> p;
	for (int i = 0; i < n; i++) {
		struct point temp;
		cin >> temp.x >> temp.y;
		p.push_back(temp);
	}
	ll e_max = 0;
	ll w_max = 0;
	ll n_max = 0;
	ll s_max = 0;
	for(int i = 0; i < n; i++) {
		if (p[i].x < s.x) {
			n_max++;
		}
		else if(p[i].x > s.x) {
			s_max++;
		}
		if (p[i].y < s.y) {
			w_max++;
		}
		else if(p[i].y > s.y) {
			e_max++;
		}
	}
	ll c = max(e_max, max(w_max, max(n_max, s_max)));
	struct point ans = s;
	if (c == e_max) {
		ans.y++;
	}
	else if (c == w_max) {
		ans.y--;
	}
	else if (c == n_max) {
		ans.x--;
	}
	else {
		ans.x++;
	}
	cout << c << endl;
	cout << ans.x << " " << ans.y << endl;

	return ;
}

int main()
{
        Solution();
    	return 0;
}

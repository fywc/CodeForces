#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	ll n;
	set<ll> x;
	cin >> n;
	ll max_pairs = 0;
	int temp;
	for (int i = 0; i < 2 * n; i++) {
		cin >> temp;
		auto pos = x.find(temp);
		if (pos != x.end()) {
			x.erase(pos);
		}
		else {
			x.insert(temp);
		}
		max_pairs = max(max_pairs, (long long)x.size());
	}
	cout << max_pairs << endl;

	return ;
}

int main()
{
        Solution();
    	return 0;
}

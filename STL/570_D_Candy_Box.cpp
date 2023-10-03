#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	map<int, int> candies;
	set<int> nums;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (candies.find(a) != candies.end()) {
			candies[a]++;
		}
		else {
			candies[a] = 1;
		}
	}
	for (auto it = candies.rbegin(); it != candies.rend(); it++) {
		int temp = it->second;
		while(nums.find(temp) != nums.end() && temp > 0) {
			temp--;
		}
		nums.insert(temp);
	}
	int ans = 0;
	for (auto it = nums.begin(); it != nums.end(); it++) {
		ans += *it;
	}
	cout << ans << endl;

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

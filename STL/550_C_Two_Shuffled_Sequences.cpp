#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	map<int, int> c;
	vector<int> a(n);	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (c.find(a[i]) == c.end()) {
			c[a[i]] = 1;
		}
		else {
			c[a[i]]++;
		}
	}
	for (auto &i: c) {
		if(i.second > 2) {
			cout << "NO" << endl;
			return ;
		}
	}
	cout << "YES" << endl;
	int positive_count = 0;
	int negative_count = 0;
	vector<int> positive;
	vector<int> negative;
	for (auto &it : c) {
		if (it.second > 0) {
			positive_count++;
			positive.push_back(it.first);
			it.second--;
		}
	}
	for (auto it = c.rbegin(); it != c.rend(); it++) {
		if (it->second > 0) {
			negative_count++;
			negative.push_back(it->first);
			it->second--;
		}
	}
	cout << positive_count << endl;
	if (positive_count > 1)
	{
		for (int i = 0; i < positive_count - 1; i++) {
			cout << positive[i] << " ";
		}
		cout << positive[positive_count - 1];
	}
	else if (positive_count == 1)
		cout << positive[0];
	cout << endl;

	cout << negative_count << endl;
	if (negative_count > 1)
	{
		for (int i = 0; i < negative_count - 1; i++) {
			cout << negative[i] << " ";
		}
		cout << negative[negative_count - 1];
	}
	else if (negative_count == 1)
		cout << negative[0];
	cout << endl;
	
	return ;
}

int main()
{
        Solution();
    	return 0;
}

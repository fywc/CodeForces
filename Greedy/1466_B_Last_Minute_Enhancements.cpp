#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	vector<int> x(n);
	set<int> d;

	for (int i = 0;  i < n; i++) {
		cin >> x[i];
	}
	sort(x.begin(), x.end());

	int temp;
	for (int i = n - 1; i >= 0; i--) {
		temp = x[i] + 1;
		if (d.find(temp) != d.end() && d.find(x[i]) == d.end()) {
			d.insert(x[i]);
		}
		else {
			d.insert(temp);
		}
	}	
	cout << d.size() << endl;

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

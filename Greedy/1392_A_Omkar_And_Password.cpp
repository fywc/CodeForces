#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int  n;
	ll a;
	cin >> n;
	set<ll> s;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
	}
	if (s.size() == 1) {
		cout << n << endl;
	}
	else {
		cout << 1 << endl;
	}
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

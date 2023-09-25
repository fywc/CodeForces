#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	set<ll> a;
	cin >> n;
	ll temp;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		a.insert(temp);
	}
	cout << a.size() << endl;

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

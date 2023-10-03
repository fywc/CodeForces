#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int a, b;
	cin >> a >> b;
	int ans = 0;
	if (a < b) {
		int offset = b - a;		
		ans = (offset & 1) ? 1 : 2;
	}
	else if (a > b) {
		int offset = a - b;
		ans = (offset & 1) ? 2 : 1;
	}
	else {
		ans = 0;
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

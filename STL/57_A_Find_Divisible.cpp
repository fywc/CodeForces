#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int l, r;
	cin >> l >> r; 
	int x, y;
	for (int i = l; i <= (l + r) / 2; i++) {
		if (i * 2 <= r) {
			x = i;
			y = i * 2;
			break;
		}
	}
	cout << x << " " << y << endl;

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

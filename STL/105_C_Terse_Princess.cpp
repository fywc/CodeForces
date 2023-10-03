#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
        int n, a, b;
        cin >> n >> a >> b;
        int t[500];
        int x;
        if (!b && a && (n - a == 1)) {
                cout << -1 << endl;
                return ;
        }
        cout << 1;
        t[0] = 1;
        x = 2;
        for (int i = 1; i < n; i++) {
                if (b == 0 && i == 1) {
                        t[i] = 1;
                        a++;
                }
                else if (i <= b) {
                        t[i] = x;
                        x *= 2;
                }
                else if (i <= a + b) {
                        t[i] = t[i - 1] + 1;
                }
                else {
                        t[i] = 1;
                }
        }
        for (int i = 1; i < n; i++) {
                cout << " " << t[i];
        }

        return ;
}

int main()
{
        	    Solution();
    	return 0;
}

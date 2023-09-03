#include <bits/stdc++.h>

using namespace std;

// DIST is just a big number to let the calculate time decrease by multiple times.
#define DIST 200

const int maxn = 2e5 + 3;
int a[maxn];
int b[maxn];

void Solution()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        a[i] = 0;
    for (int i = 0; i < DIST; i++)
        b[i] = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x < DIST)
            b[x]++;
        else
            for (int j = 1; j * x <= n; j++)
                a[j * x]++;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int res = a[i];
        for (int k = 1; k < DIST; k++) {
            if (i % k == 0)
                res += b[k];
        }
        ans = max(ans, res);
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

#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 5;

void Solution()
{
    int n, k;
    int a[maxn];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int sz = 1;
    int maxx = 0;
    bool flag = false;
    for (int i = 2; i <= n; i++) {
        if (a[i] - a[i - 1] <= k) {
            sz++;
        }
        else {
            sz = 1;
            flag = true; 
        }
        maxx = max(maxx, sz);
    }
    int res =  (!flag) ? 0 : n - maxx;
    cout << res << endl;
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

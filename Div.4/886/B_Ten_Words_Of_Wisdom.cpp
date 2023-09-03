#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int n;
    cin >> n;
    int a[52], b[52];
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    }
    int winner_id = -1;
    int winner_quality = -1;
    for (int i = 1; i <= n; i++) {
        if (a[i] <= 10) {
            if (winner_quality < b[i]) {
                winner_quality = b[i];
                winner_id = i;
            }
        }
    } 
    cout << winner_id << endl;
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

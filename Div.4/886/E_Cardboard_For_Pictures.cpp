#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll maxw = 1e9;
 
ll s[200005];
void Solution()
{
    ll left = 0;
    ll right = maxw;
    ll mid;
    ll sum;
    ll n, c;
    cin >> n >> c;
    for (ll i = 1; i <= n; i++)
        cin >> s[i];  

    while(1) {
        mid = (left + right) / 2;
        sum = 0;
        for (ll i = 1; i <= n; i++){
            sum += (s[i] + 2 * mid) * (s[i] + 2 * mid);
            if (sum > c) {
                // right = mid - 1;
                // continue;
                break;
            }
        }
        if (sum == c) {
            cout << mid << endl;
            return ;             
        }
        else if (sum > c || sum < 0) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
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

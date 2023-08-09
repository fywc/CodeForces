#include <bits/stdc++.h>

using namespace std;

void Solution() 
{
    string s = "codeforces";
    int ans = 0;
    for(int i = 0; i < 10; i++) {
        char c;
        cin >> c;
        ans += (s[i] != c);
    }
    cout << ans << endl;
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

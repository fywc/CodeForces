#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) >= 10 || (a + c) >= 10 || (b + c) >= 10) {
        cout << "YES" << endl;
        return ;
    }
    cout << "NO" << endl;
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

#include <bits/stdc++.h>

using namespace std;

bool find_target(int n, int m) {
    if(n == m) {
        return true;
    }
    if(n % 3 != 0) {
        return false;
    }
    int large = n * 2 / 3;
    int small = n / 3;
    if(find_target(large, m)) {
        return true;
    }
    else if(find_target(small, m)) {
        return true;
    }
    return false;
}

void Solution()
{
    int n;
    int m;
    cin >> n >> m;
    string res;
    res = "NO";

    if(find_target(n, m)) {
        res = "YES";
    }
    cout << res << endl;
}

int main()
{
    int N;
    cin >> N;
    while(N--) {
        Solution();
    }
    return 0;
}

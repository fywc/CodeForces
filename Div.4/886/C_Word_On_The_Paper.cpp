#include <bits/stdc++.h>

using namespace std;

#define N 64

void Solution()
{
    char a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            cout << a[i];
        }
    }
    cout << endl;
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

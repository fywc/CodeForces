#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3 + 10;

int num[MAXN];

void Solution() {
    int n, m;
    cin >> n >> m;
    memset(num, 0, sizeof(num));
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        num[u]++;
        num[v]++;
    }
    sort(num + 1, num + 1 + n);
    int xy = 0;
    for(int i = 0; i < n; i++) {
        if(num[i] == 1) {
            xy++;
        }
    }
    cout << xy / (num[n - 1] - 1) << ' ' << num[n - 1] - 1 << endl;
}

int main() {
    int N;
    cin >> N;
    while(N--) {
        Solution();
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

void Solution()
{
    int n;
    int min[4] = {INF, INF, INF, INF};
    cin >> n;
    int time;
    string s;
    int res;
    for(int i = 0; i < n; i++) {
        cin >> time >> s;
        if(s == "00") {
            min[0] = (min[0] < time) ? min[0] : time;
        } else if(s == "01") {
            min[1] = (min[1] < time) ? min[1] : time;
        } else if(s == "10") {
            min[2] = (min[2] < time) ? min[2] : time;
        } else if(s == "11") {
            min[3] = (min[3] < time) ? min[3] : time;
        }
    }
    res = min[3] < min[1] + min[2] ? min[3] : min[1] + min[2];
    if(min[3] == INF && (min[2] == INF || min[1] == INF)) {
        res = -1;
    }
    cout << res << endl;
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        Solution();
    }
    return 0;
}


#include <bits/stdc++.h>

#define ll long long
#define PII pair<ll, ll>

using namespace std;

const int INF = 0x3f3f3f3f;

void Solution()
{
        int n, m;
        ll a, b, d;
        cin >> n >> m;
        vector<PII> g[n + 1];
        ll dist[n + 1];
        
        for (int i = 0; i <= n; i++) {
                dist[i] = INF;
        }
        for (int i = 0; i < m; i++) {
                cin >> a >> b >> d;
                g[a].emplace_back(b, d);
                g[b].emplace_back(a, -d);
        }

        function<bool(int)> dfs = [&](int u) -> bool {
                for (auto [x, y] : g[u]) {
                    if (dist[x] != INF) {
                        if (dist[x] != dist[u] + y) {
                            return false;
                        }
                    } else {
                        dist[x] = dist[u] + y;
                        if (!dfs(x)) {
                            return false;
                        }
                    }
                }
                return true;
        };

        for (int i = 1; i <= n; ++i) {
                if (dist[i] != INF) {
                    continue;
                }
                dist[i] = 0;
                if (!dfs(i)) { 
                    cout << "NO" << endl;
                    return;
                }
            }
        cout << "YES" << endl;
        return ;
}

int main()
{
    int T;
    cin >> T;
    while(T--) {
        Solution();
    }
    return (int)0;
}


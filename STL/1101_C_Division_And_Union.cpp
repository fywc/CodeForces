#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct node {
        int l, r;
        int idx;
        int group;
} a[10005];

bool cmp(node a1, node a2)
{
        if (a1.l == a2.l) {
                return a1.r < a2.r;
        }
        return a1.l < a2.l;
}

bool cmp1(node a1, node a2)
{
        return a1.idx < a2.idx;
}

void Solution()
{
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
            cin >> a[i].l >> a[i].r;
            a[i].idx = i;
    }
    sort(a + 1, a + 1 + n, cmp);
    a[1].group = 1;
    int maxr = a[1].r;
    for (int i = 2; i <= n; i++) {
            if (a[i].l <= maxr) {
                    a[i].group = 1;
            }
            else {
                    flag = true;
                    a[i].group = 2;
                    break;
            }
            maxr = max(maxr, a[i].r);
    }
    if (flag) {
        //    sort(a + 1, a + 1 + n, cmp1);
            for (int i = 1; i <= n; i++) {
                    if (a[i].group == 1) {
                            cout << 1 << " ";
                    }
                    else {
                            cout << 2 << " ";
                    }
            }
            cout << endl;
    }
    else {
            cout << -1 << endl;
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

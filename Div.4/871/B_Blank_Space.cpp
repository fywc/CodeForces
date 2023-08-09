#include <bits/stdc++.h>

using namespace std;

void Solution() {
    int n;
    int fi = 0;
    int la = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            la++;
        }
        else {
            if(la > fi) {
                fi = la;
            }
            la = 0;
        }
    }
    if(la > fi) {
        fi = la;
    }
    cout << fi << endl;
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


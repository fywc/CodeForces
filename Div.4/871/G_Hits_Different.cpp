// need GNU C++20 compiler
#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

long long f[1000010];

void init() 
{
    f[1] = 1;
    for(int i = 2, k = 2; k < 1000010; i++) {
        for(int j = 1; j <= i; j++, k++) {
            long long one = 1;
            f[k] = one * k * k;
            if(i - 1 > 0) {
                if(j <= i - 1){
                    f[k] += f[(i - 2) * (i - 1) / 2 + j];
                }
                if(j - 1 > 0) {
                    f[k] += f[(i - 2) * (i - 1) / 2 + j - 1];
                    if(i - 2 > 0 && j - 1 <= i - 2) {
                        f[k] -= f[(i - 3) * (i - 2) / 2 + j - 1];
                    }
                }
            }
        }
    }
    return ;
}

void Solution() {
    int n;
    cin >> n;
    cout << f[n] << endl;
    
    return ;
}

int main() {
    int T;
    cin >> T;
    init();
    while(T--) {
	    Solution();
    }
    return 0;    
}

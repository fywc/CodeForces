#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ( a + b == c ) 
        cout << "+" << endl;
    else if ( a - b == c)
        cout << "-" << endl;

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

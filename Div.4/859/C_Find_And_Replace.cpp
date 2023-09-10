#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int n;
    cin >> n;
    char s[n];
    bool flag;
    int switch_flag = 1;
    map<char, int> dict;
    flag = true;
    for (int i = 0; i < n; i++) {
	cin >> s[i];
    }
    if (n == 1) {
	cout << "YES" << endl;
	return ;
    }
    dict[s[0]] = 1;
    for (int i = 1; i < n ; i++) {
        if (dict.find(s[i]) == dict.end()) {
    	    dict[s[i]] = (dict[s[i - 1]] == 1) ? 0 : 1;
    	    // switch_flag = (switch_flag == 1) ? 0 : 1;
        }
    }
    for (int i = 0; i < n - 1; i++) {
	if (dict[s[i]] == dict[s[i + 1]]) {
	    flag = false;
	    break;
	}
    }
    string ans = (flag ? "YES" : "NO");
    cout << ans << endl; 
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

#include <bits/stdc++.h>

#define ll long long;

using namespace std;

void Solution()
{
        int n;
        cin >> n;
        string s[n];
        long long ans;
        bool flag;
        int arr[2] = {0, 0};
        ans = n;
        flag = false;
        for (int i = 0; i < n; i++) {
		cin >> s[i];
		if (s[i].size() % 2 == 1)
		flag = true;
		for (int j = 0; j < s[i].size(); j++) {
		arr[s[i][j] - '0']++;
		}

        }
        if ((arr[0] & 1) && (arr[1] & 1) && (!flag) )
            	ans--;
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



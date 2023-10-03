#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
        int n;
        cin >> n;
        map<string, int> users;
        string user;
        for (int i = 0; i < n; i++) {
                cin >> user;
                if (users.find(user) == users.end()) {
                        users[user] = 1;
                        cout << "OK" << endl;
                }
                else {
                        int temp = users[user];
                        users[user]++;
                        cout << user << temp << endl;
                }
       }
       return ;
}

int main()
{
        Solution();
    	return 0;
}

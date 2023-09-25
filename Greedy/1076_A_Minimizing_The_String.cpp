#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	string str;
	char c;
	cin >> n;
	int max_index = n - 1;
	for (int i = 0; i < n; i++) {
		cin >> c;
		str += c;
	}
	for (int i = 0; i < n - 1; i++) {
		if (str[i] > str[i + 1]) {
			max_index = i;
			break;
		}
	}
	str.erase(max_index, 1);
	cout << str << endl;

	return ;
}

int main()
{
       	Solution();
    	return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	char c;
	int d;
	cin >> c >> d;
	if ( (c == 'a' && d == 1) || (c == 'a' && d == 8) ||
	     (c == 'h' && d == 1) || (c == 'h' && d == 8) ) {
		cout << 3 << endl;
		return ;
	}
	else if ( c == 'a' || c == 'h' || d == 1 || d == 8 ) {
		cout << 5 << endl;
	}
	else {
		cout << 8 << endl;
	}
}

int main()
{
        Solution();
    	return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	int n2 = n * n;
	int a[n][n];
	int temp = 1;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				a[j][i] = temp;
				temp++;
			}
		}
		else {
			for (int j = n - 1; j >= 0; j--) {
				a[j][i] = temp;
				temp++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j]; 
			if (j < n - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}

	return ;
}

int main()
{
        Solution();
    	return 0;
}

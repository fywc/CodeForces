#include <bits/stdc++.h>

using namespace std;

#define ll long long

void Solution()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	sort(a.begin(), a.end());
	if (a[n - 1] >= a[n - 2] + a[n - 3])
		cout << "NO";
	else {
		cout << "YES" << endl;
		cout << a[n - 1] << " " << a[n - 2] << " ";
		for (int i = n - 4; i >= 0; i--)
			cout << a[i] << " ";
		cout << a[n - 3];
	}
	return ;	
}

int main()
{
        Solution();
    	return 0;
}

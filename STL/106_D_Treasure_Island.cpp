#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct cmd {
	char dir;
	int len;
};

struct location {
	int i;
	int j;
};

int N[1500][1500];
int S[1500][1500];
int E[1500][1500];
int W[1500][1500];

void Solution()
{
	int n, m;
	cin >> n >> m;
	char s[1500][1500];
	map<char, struct location> local_sights;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> s[i][j];
			if (s[i][j] >= 'A' && s[i][j] <= 'Z') {
				struct location temp = {i, j}; 
				local_sights[s[i][j]] = temp;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (s[j][i] == '#')
				N[j][i] = 0;
			else
				N[j][i] = N[j - 1][i] + 1;
		}
		for (int j = n; j >= 1; j--) {
			if (s[j][i] == '#')
				S[j][i] = 0;
			else
				S[j][i] = S[j + 1][i] + 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (s[j][i] == '#')
				W[i][j] = 0;
			else
				W[i][j] = W[i][j - 1] + 1;
		}
		for (int j = m; j >= 1; j--) {
			if (s[i][j] == '#')
				E[i][j] = 0;
			else
				E[i][j] = E[i][j + 1] + 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			N[i][j]--;
			S[i][j]--;
			E[i][j]--;
			W[i][j]--;
		}
	}
			
	int k;
	cin >> k;
	vector<struct cmd> ins(k);
	for (int i = 0; i < k; i++) {
		char dir;
		int len;
		cin >> dir >> len;
		struct cmd temp = {dir, len};
		ins[i] = temp;
	}

	vector<char> ans;
	for (auto it = local_sights.begin(); it != local_sights.end(); it++) {
		bool is_satisfy = true;
		int temp_i = it->second.i;
		int temp_j = it->second.j;
		for (int i = 0; i < k; i++) {
			if (ins[i].dir == 'N') {
				int len = ins[i].len;
				if (N[temp_i][temp_j] >= len) {
					temp_i -= len;
				}
				else {
					is_satisfy = false;
					break;
				}
			}
			else if (ins[i].dir == 'S') {
				int len = ins[i].len;
				if (S[temp_i][temp_j] >= len) {
					temp_i += len;
				}
				else {
					is_satisfy = false;
					break;
				}
			}
			else if (ins[i].dir == 'E') {
				int len = ins[i].len;
				if (E[temp_i][temp_j] >= len) {
					temp_j += len;
				}
				else {
					is_satisfy = false;
					break;
				}
			}
			else if (ins[i].dir == 'W') {
				int len = ins[i].len;
				if (W[temp_i][temp_j] >= len) {
					temp_j -= len;
				}
				else {
					is_satisfy = false;
					break;
				}
			}
		}
		if (is_satisfy) {
			ans.push_back(it->first);
		}
	}
	int ans_len = ans.size();
	if (ans_len > 0) {
		sort(ans.begin(), ans.end());
		for(int i = 0; i < ans_len; i++) {
			cout << ans[i];
		}
		cout << endl;
	}
	else {
		cout << "no solution" << endl;
	}

	return ;
}

int main()
{
        Solution();
    	return 0;
}

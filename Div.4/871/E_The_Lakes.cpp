#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3+10;

int matrix[MAXN][MAXN];

int get_volume(int n, int m, int i, int j, int temp_volume) 
{
    if(i < 0 || i >= n || j < 0 || j >= m) {
        return temp_volume;
    }
    if(matrix[i][j] == -1 || matrix[i][j] == 0) {
        return temp_volume;
    }
    temp_volume += matrix[i][j];
    matrix[i][j] = -1;
    temp_volume = get_volume(n, m, i + 1, j, temp_volume);
    temp_volume = get_volume(n, m, i - 1, j, temp_volume);
    temp_volume = get_volume(n, m, i, j + 1, temp_volume);
    temp_volume = get_volume(n, m, i, j - 1, temp_volume);
    return temp_volume;
}

void Solution()
{
    int largest_volume = 0;
    int n, m;
    cin >> n >> m;
    //int **matrix = new int*[m];
    //int matrix[n][m];
    //for(int i = 0; i < n; i++) {
    //    matrix[i] = new int[m];
    //}
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] != -1 && matrix[i][j] != 0) {
                int temp_volume = get_volume(n, m, i, j, 0);
                largest_volume =  temp_volume > largest_volume ? temp_volume : largest_volume;
            }
        }
    }
    cout << largest_volume << endl;
}

int main()
{
    int N;
    cin >> N;
    while(N--) {
        Solution();
    }
    return 0;
}
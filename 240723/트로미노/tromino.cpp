#include <iostream>
#include <algorithm> // For the max function
using namespace std;

int n, m, res;
int arr[202][202];

int dc[4] = {1,0,-1,0};
int dr[4] = {0,1,0,-1};

void func(int c, int r) {
    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 4; j++){
            res = max(arr[c][r]+ arr[c+dc[i]][r+dr[i]]+ arr[c+dc[j]][r+dr[j]],res);
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            func(i, j);
        }
    }

    cout << res;
    return 0;
}
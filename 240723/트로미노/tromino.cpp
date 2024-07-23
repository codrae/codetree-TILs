#include <iostream>
#include <algorithm> // For the max function
using namespace std;

int n, m, res;
int arr[202][202];

void func(int col, int row) {
   int valA = arr[col + 1][row] + max(arr[col + 1][row + 1], arr[col + 2][row]);
   int valB = arr[col - 1][row] + max(arr[col - 1][row - 1], arr[col - 1][row + 1]);
   int valC = arr[col][row + 1] + max(arr[col][row + 2], arr[col + 1][row + 1]);  
   
   int maxVal = max({valA, valB, valC});
   res = max(maxVal + arr[col][row], res);
   res = max(res, arr[col][row] + arr[col + 1][row] + arr[col][row + 1]);   
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
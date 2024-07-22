#include <iostream>
using namespace std;

int arr[21][21];
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    } 
    int res = 0;

    for(int i = 1; i <= n-2; i++){
        for (int j = 1; j <=n-2; j++){
            int cnt = 0;
            for(int k = 0; k < 3; k++){
                cnt += arr[i][j+k];
                cnt += arr[i+1][j+k];
                cnt += arr[i+2][j+k];
            }
            res = max(res,cnt);
        }
    }

    cout << res;

    return 0;
}
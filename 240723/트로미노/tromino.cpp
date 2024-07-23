#include <iostream>
using namespace std;

int n,m,res;
int arr[202][202];

void func(int x, int y){
    res = max(res, arr[y][x] + max(arr[y][x+1]+ max(arr[y+1][x+1], arr[y][x+2]),arr[y+1][x]+max(arr[y+2][x],arr[y+1][x+1])));
    res = max(res,arr[y][x]+arr[y+1][x]+arr[y][x+1]);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=m; j++){
            cin >> arr[i][j];
        }
    }


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=m; j++){
            func(i,j);
        }
    }

    cout << res;


    return 0;
}
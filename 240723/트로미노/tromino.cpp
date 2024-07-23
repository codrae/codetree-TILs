#include <iostream>
using namespace std;

int n,m,res;
int arr[202][202];
int a,b,c,d;

void func(int c, int r){
   a = arr[c+1][r] + max(arr[c+1][r+1], arr[c+2][r]);
   b = arr[c-1][r] + max(arr[c-1][r-1], arr[c-1][r+1]);
   c = arr[c][r+1] + max(arr[c][r+2],arr[c+1][r+1]);  
   a = max(a,b);
   a = max(a,c);
   res = max(a+arr[c][r],res);
   res = max(res, arr[c][r]+arr[c+1][r]+arr[c][r+1]);   
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
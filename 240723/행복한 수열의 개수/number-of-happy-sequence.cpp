#include <iostream>
using namespace std;

int arr[101][101];
int n,m,cnt,pr,res;
bool check;

int main() {
    // 여기에 코드를 작성해주세요.
cin >> n >> m;
pr = 0;
    for(int i = 1; i <= n; i++){
       cnt = 1;
        pr = 0;
        check = false;
        for(int j = 1; j <=n; j++){
            cin >> arr[i][j];
            if(pr == arr[i][j]){
                cnt++;
                if(cnt >= m) check = true;
            }
            else cnt = 1;
            pr = arr[i][j];
        }
        if(check) res++;

    }

    for(int i = 1; i<=n; i++){
        cnt = 1;
        pr = 0;
        check = false;
        for(int j = 1; j<=n; j++){
            if(pr == arr[j][i]){
                cnt++;
                if(cnt >= m) check = true;
            }
            else cnt = 1;
            pr = arr[j][i];
        }
        if(check) res++;
        }
    cout << res;

    return 0;
}
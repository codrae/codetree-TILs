#include <iostream>
#include <vector>
using namespace std;

int n, m, res;
vector<vector<int>> gold;

void input() {
    cin >> n >> m;
    gold.assign(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> gold[i][j];
        }
    }
}

int calculateGold(int c, int r, int k) {
    int count = 0;
    for (int i = 0; i <= k; ++i) {
        for (int j = -i; j <= i; ++j) {
            int dc = c + j;
            int dr1 = r + (i - abs(j));
            int dr2 = r - (i - abs(j));
            if (dc >= 1 && dc <= n) {
                if (dr1 >= 1 && dr1 <= n) count += gold[dc][dr1];
                if (dr2 >= 1 && dr2 <= n && dr1 != dr2) count += gold[dc][dr2];
            }
        }
    }
    return count;
}

int main() {
    input();

    res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 0; k <= n; k++) {
                int goldCount = calculateGold(i, j, k);
                int price = k * k + (k + 1) * (k + 1);
                if (goldCount * m >= price) {
                    res = max(res, goldCount);
                }
            }
        }
    }

    cout << res << endl;

    return 0;
}
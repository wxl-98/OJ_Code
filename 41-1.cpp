/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 41.cpp
*       &Created Time:  2020年04月26日 星期日 20时30分41秒  CST  Day/117 and Week/17 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int f[1005][15][15];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            f[1][i][j] = (i == j);
        }
    }
    for (int t = 2; t <= n; t++) {
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                for (int l = 0; l < k; l++) {
                    if (l - j) f[t][i][j] += f[t - 1][i][l];
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            if (i - j) ans += f[n][i][j];
        }
    }

    cout << ans << endl;
    return 0;
}

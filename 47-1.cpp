/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 47.cpp
*       &Created Time:  2020年04月22日 星期三 20时04分06秒  CST  Day/113 and Week/16 of this year
*       &Description:
***********************************************************/
//降维

#include <iostream>
using namespace std;

int all, n, w[105], v[105], ans[10005];

int main() {
    cin >> all >> n;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = all; j > 0; j--) {
            if (j < w[i]) {
                break;
            } else {
                ans[j] = max(ans[j], v[i] + ans[j - w[i]]);//ans[i][j]表示前i个物品的第j重量的获得最大价值
            }
        }
    }
    cout << ans[all] << endl;
    return 0;
}

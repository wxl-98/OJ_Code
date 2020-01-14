/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 203.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 19时32分01秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[15][15], b[105], cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            b[cnt] = a[i][j];
            cnt++;
        }
    }
    for (int i = 0; i < m; i++) {
        int max = a[0][i];
        for (int j = 1; j < n; j++) {
            if (max < a[j][i]) {
                max = a[j][i];
            }
        }
        cout << max << endl;
    }
    sort(b, b + cnt);
    int sum = 0;
    for (int i = cnt - 1; i >= 0; i--) {
        sum += b[i];
        cout << b[i];
        if (i) {
            cout << " ";
        }
    }
    cout << endl;
    int ave = round(1.0 * sum / cnt);
    cout << ave << endl;
    int ret = 0;
    for (int i = cnt - 1; i >= 0; i--) {
        if (b[i] >= ave) {
            ret++;
        } else {
            break;
        }
    }
    cout << ret << endl;
    return 0;
}

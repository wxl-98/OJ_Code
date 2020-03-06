/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 208.cpp
*       &Created Time:  2020年02月09日 星期日 14时40分04秒  CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/

//桶排序
#include <iostream>
using namespace std;

int main() {
    int m, n, num[105] = {0};
    cin >> m;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        num[temp]++;
    }
    cin >> n;
    for (int i = 100; i > 0; i--) {
        if (num[i] >= n) {
            cout << num[i] << endl;
            break;
        }

    }
    return 0;
}

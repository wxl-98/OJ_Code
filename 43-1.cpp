/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 43-1.cpp
*       &Created Time: 19Century 2019年12月28日 星期六 18时35分03秒 
*                          CST  Day/362 and Week/51 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000

int val[MAX_N + 5][MAX_N + 5] = {0};


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
        }
    }
    cout << val[0][0] << endl;

    return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 206.cpp
*       &Created Time: 19Century 2019年12月20日 星期五 22时03分07秒 
*                          CST  Day/354 and Week/50 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double a[35][35];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[j][i];
        }
        cout << sum << endl;
    }
    return 0;
}

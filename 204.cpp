/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 204.cpp
*       &Created Time: 19Century 2019年12月20日 星期五 20时51分12秒 
*                          CST  Day/354 and Week/50 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main() {
    int n, a[35][35];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j]; 
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i][i] << endl;
    }
    return 0;
}

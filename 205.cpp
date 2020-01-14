/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 205.cpp
*       &Created Time: 19Century 2019年12月20日 星期五 20时59分49秒 
*                          CST  Day/354 and Week/50 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, m, a[35][35];
    cin >> n >> m;
  /*  int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; i++) {
            ans += a[i][j];
        }
        printf("%.6f\n", 1.0 * ans / m);
    }
    return 0;
}
*/

for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < m; j++) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    printf("%.6f\n", 1.0 * sum / m);
}
return 0;
}



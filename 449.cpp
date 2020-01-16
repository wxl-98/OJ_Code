/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 203.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 18时26分47秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main() {
    int n;
    int a[25][25] = {0};
    while (n < 1 || n > 20) {
        scanf("%d", &n);
    }
    for (int i = 0; i < n; i++) {
        a[i][0] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n; j++)
        a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    for (int i = 0; i < n; i++) {
        cout << "1" ;
        for (int j = 1; j <= i; j++)
        cout << " " << a[i][j];
        cout << endl;
    }
    return 0;
}

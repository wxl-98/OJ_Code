/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 202.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 16时36分06秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1005] = {0}, b[1005] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = i;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
            }
        }
    }
  //  sort(a, a + n);
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << b[i];
    }

    return 0;
}

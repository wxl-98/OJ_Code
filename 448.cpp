/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 448.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 10时30分45秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    int a[100];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> num;
    for (int i = 1; i <= n; i++) {
        if (a[i] == num) {
            cout << i << endl;
            return 0;
        }
       // cout << 0 << endl;;
    }
    cout << 0 << endl;
    return 0;
}

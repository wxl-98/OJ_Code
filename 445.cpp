/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 445.cpp
*       &Created Time:  2020年02月09日 星期日 19时36分12秒  CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/

#include <bits/stdc++.h>
using namespace std;

#define MAX_N 1000

int main() {
    int n, x[MAX_N + 5];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }
    int num1 = 0, num2 = 0, flag = 0;
    for (int i = 1; i <= n; i++) {
        num1 = num2 = 0;
        for (int j = i-1; j >= 1; j--) {
            if (x[j] > x[i])
                num1++;
        }
        for (int j = i + 1; j <= n; j++) {
            if (x[j] > x[i])  num2++;
        }
        if (num1==num2)  flag++;
    }
    cout << flag << endl ;
    return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 196.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 15时30分32秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

long long f(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n == 3) return 1;
//    if (n == 4) return 1;
    return f(n - 2) + f(n - 3);
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

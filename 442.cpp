/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 442.cpp
*       &Created Time:  2020年02月08日 星期六 15时54分05秒  CST  Day/039 and Week/05 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main() {
    int n, a[31];
    cin >> n;
    a[1] = 1, a[2] = 2;
    for (int i = 3; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[1];
    for (int i = 2; i <= n; i++) {
        cout << " " << a[i];
    }
    cout << endl;
    return 0;
}

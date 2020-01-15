/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 211.cpp
*       &Created Time: 19Century 2019年12月29日 星期日 23时43分14秒 
*                          CST  Day/363 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string a[35];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        reverse(a[i].begin(), a[i].end());
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}

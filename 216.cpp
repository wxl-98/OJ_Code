/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 216.cpp
*       &Created Time: 19Century 2019年12月31日 星期二 23时58分52秒 
*                          CST  Day/365 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[101];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        s[i] = s[i].substr(3);
    }
    sort(s, s + n);
    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }
    return 0;
}

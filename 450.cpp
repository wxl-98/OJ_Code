/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 450.cpp
*       &Created Time: 19Century 2019年12月31日 星期二 23时26分05秒 
*                          CST  Day/365 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s[100];
    for (int i = 1; i <= n; i++) {
        cin >> s[i]; 
    }
    sort(s, s + n + 1, less<int>());
    for (int i = 1; i <= n; i++) {
        cout << s[i];
        if (i != n) cout << " ";
    }
    return 0;
}

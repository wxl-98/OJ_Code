/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 210.cpp
*       &Created Time: 19Century 2019年12月20日 星期五 21时49分23秒 
*                          CST  Day/354 and Week/50 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    int n;
    string s[26];
    cin >> n;
   // getline(cin, s);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s + n, less<string>());
    for (int i = 0; i < n; i++) {
        if (i != 0 && i != n) cout << " ";
        cout << s[i];
    }
    cout << endl;
    return 0;
}


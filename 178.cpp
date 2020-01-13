/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 178.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 22时33分26秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include <cstring>

using namespace std;
#define MAX_N 1000000
int main() {
    int n;
    cin >> n;
    char str[MAX_N + 5] = {'A'};
    for (int i = 1; i < n; i++) {
        int len = strlen(str);
        for (int j = 0, k = 2 * len; j < len; j++, k--) {
            str[k] = str[j];
        }
        str[len] = 'A' + i;
    }
    cout << str << endl;
    return 0;
}


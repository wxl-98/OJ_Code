/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 169.cpp
*       &Created Time: 2019年12月06日 星期五 21时56分07秒
*       &Description:
***********************************************************/
#include<iostream>
#include <cstring>
using namespace std;
#define MAX_N 30000
#define MAX_M 1000
int main() {
    int n;
    cin >> n;
    int a[MAX_M+5]= {0};
    char b[MAX_M+5];
    int k;
    char c;
    for (int i = 0; i < n; i++) {
        cin >> c >> k;
        if (!a[i]) a[i] = k;
        b[i] = c;
    }
    char s[MAX_N + 5];
    cin >> s;
    int len = strlen(s);
    int ans = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < n; j++) {
            if (b[j] == s[i]) {
                ans += a[j];
            }
        } 
    }
    cout << ans << endl;
    return 0;
}


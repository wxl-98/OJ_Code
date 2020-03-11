/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 245.cpp
*       &Created Time:  2020年03月11日 星期三 23时14分47秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100000

int main() {
    int n, str[MAX_N + 5];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> str[i];
    }
    sort(str + 1, str + 1 + n);
    int a = str[(n + 1) / 2], sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += abs(str[i] - a);
    }
    cout << sum << endl;
    return 0;
}

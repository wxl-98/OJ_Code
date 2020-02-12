/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 452.cpp
*       &Created Time:  2020年02月10日 星期一 15时15分54秒  CST  Day/041 and Week/06 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

#define MAX_N 10000

int a[MAX_N + 5];

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                sum ++;
            }
        }   
    }
    cout << sum << endl;
    return 0;
}

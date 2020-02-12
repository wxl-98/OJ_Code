/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 456.cpp
*       &Created Time:  2020年02月10日 星期一 17时06分21秒  CST  Day/041 and Week/06 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000

int a[MAX_N + 5];

int main() {
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        a[num]++;
    }
    for (int i = 1; i <= MAX_N; i++) {
        if (a[i] % 2) cout << i << endl;
    }
    return 0;
}

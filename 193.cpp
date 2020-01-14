/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 193.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 14时14分54秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 100000

int a[MAX_N + 5] = {0};

int main() {
    int n, k, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k >> s;
    int ans = s - k;
    int head = 0, cail = n - 1;
    while (head <= cail) {
        int mid = (head + cail) / 2;
        if (a[mid] == ans) {
            cout << "Yes" << endl;
            return 0;
        }
        if (ans > a[mid]) {
            head = mid + 1;
        } else {
            cail = mid - 1;
        }
        
    }

    cout << "No" << endl;
    return 0;
}

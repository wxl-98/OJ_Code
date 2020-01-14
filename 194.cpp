/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 194.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 11时20分37秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 100000

int a[MAX_N + 5] = {0};

int main() {
    int n, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> s;
    for (int i = 0; i < n; i++) {
        int head = i + 1, cial = n - 1;
        int ans = s - a[i];
        while (cial >= head) {
            int mid = (head + cial) / 2;
            if (ans == a[mid]) {
                cout << "Yes" << endl;
                return 0;
            }
            if (ans > a[mid]) {
                head = mid + 1;
            } else {
                cial = mid - 1;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

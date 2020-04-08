/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 390.cpp
*       &Created Time:  2020年04月08日 星期三 20时22分21秒  CST  Day/099 and Week/14 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int n, m, num[100005], mmax;

int check(int len) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += num[i] / len;
    }
    return s;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        mmax = max(mmax, num[i]);
    }
    int l = 0, r = mmax;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        int s = check(mid);
        if (s >= m) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << l << endl;
    return 0;
}


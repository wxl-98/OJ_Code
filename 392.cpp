/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 392.cpp
*       &Created Time:  2020年04月22日 星期三 19时05分59秒  CST  Day/113 and Week/16 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int n, m, num[100005], mmax;

int check(int mid) {
    int cnt = 1, now = 0;
    for (int i = 1; i < n; i++) {
        if (num[i] - num[now] >= mid) {
            cnt++;
            now = i;
        }
    }
    return cnt;
}


int func() {
    int l = 1, r = mmax;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        int cnt = check(mid);
        if (cnt >= m) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    return l;
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    mmax = num[n - 1] - num[0];
    cout << func() << endl;


    return 0;
}

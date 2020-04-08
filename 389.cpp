/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 389.cpp
*       &Created Time:  2020年04月08日 星期三 20时50分30秒  CST  Day/099 and Week/14 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int n, m, num[100005], mmax;

int func() {
    int l = 1, r = mmax;
    while (l != r) {
        int mid = (l + r + 1) / 2, cnt = 1, now = 0; 
        for (int i  =1; i < n; i++) {
            if (num[i] - num[now] >= mid) {
                cnt++;
                now = i;
            }
        }
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
        mmax = max (mmax, num[i]);
    }
    sort(num, num + n);
    cout << func() << endl;
    return 0;
}

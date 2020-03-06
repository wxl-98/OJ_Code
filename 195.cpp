/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 195.cpp
*       &Created Time:  2020年02月08日 星期六 15时15分33秒  CST  Day/039 and Week/05 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main() {
    int n, m, a[100005] = {0};
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        int l = 0, r = n - 1;
        while(l - r) {
            int mid = (l + r + 1) / 2;
            if (a[mid] <= temp) {
                l = mid;
            } else {
                r = mid - 1;
            }
        }
        if (i) {
            cout << " ";
        }
        cout << a[l];
    }
    return 0;
}

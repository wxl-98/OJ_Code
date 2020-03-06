/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 217.cpp
*       &Created Time:  2020年02月09日 星期日 14时55分51秒  CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100

int num[MAX_N + 5] = {0};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        num[temp]++;
    }
    int ans = 0;
    for (int i = 100; i >= 0; i--) {
        ans += num[i];
        if (ans * 2 >= n) {
            cout << i << " " << ans << endl;
            break;
        }
    }


    return 0;
}

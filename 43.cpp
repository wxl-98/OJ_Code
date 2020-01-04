/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 43.cpp
*       &Created Time: 19Century 2019年12月28日 星期六 18时05分13秒 
*                          CST  Day/362 and Week/51 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000

int ans[MAX_N + 5][MAX_N + 5] = {0};
int keep[MAX_N + 5][MAX_N + 5] = {0};

int dfs(int i, int j, int n) {
    if (i + 1 == n) return ans[i][j];
    if (keep[i][j]) return keep[i][j];
    int val1 = dfs(i + 1, j, n);
    int val2 = dfs(i + 1, j + 1, n);
    return keep[i][j] = (val1 > val2 ? val1 : val2) + ans[i][j];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> ans[i][j];
        }
    }

    cout << dfs(0, 0, n) << endl;
    return 0;
}

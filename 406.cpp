/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 406.cpp
*       &Created Time:  2020年03月18日 星期三 19时01分38秒  CST  Day/078 and Week/11 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int n, m, ans;
char mmap[2005][2005];
int dir[8][2] = {1, 0, 0, 1, -1, 0, 0, -1, 1, 1, 1, -1, -1, 1, -1, -1};

void func(int x, int y) {
    for (int i = 0; i < 8; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (mmap[tx][ty] == '#') {
            mmap[tx][ty] = 0;
            func(tx, ty);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> (&mmap[i][1]);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mmap[i][j] == '#') {
                ans++;
                mmap[i][j] = 0;
                func(i, j);
            }
        }
    }

    cout << ans << endl;

    return 0;
}

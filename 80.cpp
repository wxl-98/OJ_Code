/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 80.cpp
*       &Created Time:  2020年03月11日 星期三 20时29分51秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/
//改成最短步数,能到就是yes,不能到就是no

#include <iostream>
using namespace std;

int n, m, sx, sy;
char mmap[505][505];
int dir[4][2] = {1, 0, 0, -1, 0, 0, -1};


int func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (mmap[x][y] == 'g') return 1;
        if (mmap[tx][ty] == '.') {
            mmap[tx][ty] = '*';
            if (func(tx, ty)) {
                return 1;
            }
        }
    }
    return 0;
}


int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 's') {
                sx = i;
                sy = j;
            }
        }
    }
    if (func(sx, sy)) {
        cout << "Yes" << endl; 
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

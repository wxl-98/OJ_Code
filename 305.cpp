/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 305.cpp
*       &Created Time:  2020年04月01日 星期三 19时03分15秒  CST  Day/092 and Week/13 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <queue>
using namespace std;

struct node {
    int x, y, step;
};


int n, m, x, y;
char mmap[105][105];
int dir[8][2] = {
    1, 0, 0, 1, -1, 0, 0, -1,
    1, 1, 1, -1, -1, 1, -1, -1,
};

int main() {
    cin >> m >> n >> y >> x;
    for (int i = 1; i <= n; i++) {
        cin >> &mmap[i][1];
    }
    queue<node> que;
    que.push({n - x + 1, y, 0});
    mmap[n - x + 1][y] = '*';
    int ans;
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        ans = temp.step;
        for (int i = 0; i < 8; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (mmap[x][y] == '.') {
                mmap[x][y] = '*';
                que.push({x, y, temp.step + 1});
            }
        }
    }
    cout << ans << endl;
    return 0;
}

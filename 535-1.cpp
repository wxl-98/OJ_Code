/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 535-1.cpp
*       &Created Time:  2020年03月25日 星期三 20时58分17秒  CST  Day/085 and Week/12 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int n, m, ans = 1;
char mmap[55][55];
queue<node> que;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '@') {
                que.push({i, j});
            }
        }
    }
    while (!que.empty()) {
        node.temo = que.front();
        que.pop();
    }

    return 0;
}

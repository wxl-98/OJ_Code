/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 326.cpp
*       &Created Time:  2020年04月23日 星期四 20时41分22秒  CST  Day/114 and Week/16 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 50000
int fa[MAX_N + 5], val[MAX_N + 5];

void init(int n) {
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
        val[i] = 0;
    }
    return ;
}


int get(int x) {
    if(x == fa[x]) return x;
    int root = get(fa[x]);
    val[x] += val[fa[x]];
    val[x] %= 3;
    return fa[x] = root;
}

int merge(int x, int y, int t) {
    int a = get(x), b = get(y);
    if (a == b) {
        return (val[x] - val[y] - t) % 3 == 0;
    }
    fa[a] = b;
    val[a] = (t + val[y] - val[x] + 3) % 3;
    return 1;
}

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    init(n);
    for (int i = 0; i < k; i++) {
        int x, y, t;
        cin >> t >> x >> y;
        t -= 1;
        if (x <= n && y <= n && merge(x, y, t)) continue;
        ans += 1;
    }
    cout << ans << endl;
    return 0;
}

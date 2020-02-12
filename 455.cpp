/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 455.cpp
*       &Created Time:  2020年02月10日 星期一 16时35分05秒  CST  Day/041 and Week/06 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int maxn = max(a, max(b, c));
    int minn = min(a, min(b, c));
    for (int i = 2; i <= minn; i++) {
        while (maxn % i == 0 && minn % i == 0) {
            maxn /= i;
            minn /= i;
        }
    }
    cout << minn << "/" << maxn << endl;
    return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 55.cpp
*       &Created Time:  2020年03月04日 星期三 18时12分52秒  CST  Day/064 and Week/09 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int is_val(int y, int m, int d) {
    if (m == 1 || m == 2) {
        y--;
        m += 12;
    }
    int w;
    w = (d + 2 * m + 3 * (m + 1) / 5 + y
         + y / 4 - y / 100 + y / 400) % 7;

    return w;
}

int main() {
    int y, y1, m, m1, d, d1, sum = 0;;
    cin >> y >> m >> d;
    cin >> y1 >> m1 >> d1;
    for (int i = y + 1; i <= y1 - 1; i++) {
        if (is_val(i, 6, 6) == 5) sum += 1;
    }

    if (m < 6) {
        if (is_val(y, 6, 6) == 5) sum += 1;
        if (m == 6 && d < 6) {
            if (is_val(y, 6, 6) == 5) sum += 1;
        }
    }

    if (m1 > 6) {
        if (is_val(y1, 6, 6) == 5) sum += 1;
        if (m1 == 6 && d1 > 6) {
            if (is_val(y1, 6, 6) == 5) sum += 1;
        }
    }

    cout << sum << endl;
    return 0;
}

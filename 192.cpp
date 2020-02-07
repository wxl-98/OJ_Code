/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 192.cpp
*       &Created Time:  2020年02月07日 星期五 23时21分21秒  CST  Day/038 and Week/05 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double a;
    cin >> a;
    double r = 30, l = 0;
    while (r - l > 1e-5) {
        double mid = (r + l) / 2;
        if (mid * exp(mid) > a) r = mid;
        else l = mid;
    }
    printf("%.4f\n", l);

    return 0;
}

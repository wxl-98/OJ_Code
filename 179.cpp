/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 179.cpp
*       &Created Time: 19Century 2019年12月06日 星期五 23时17分08秒 
*                          CST  Day/340 and Week/48 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;
#define EPSILON 1e-7
int main(){
    double a = -20, b = 20;
    double p, q, mid;
    cin >> p >> q;
    while (fabs(p * mid + q) > EPSILON){
        mid = (a + b) / 2;
        if ((p * mid + q) *(p * a + q) < 0){
            b = mid;
        }
        else {
            a = mid;
        }
    }
    printf("%.4f\n", mid);
    return 0;
}


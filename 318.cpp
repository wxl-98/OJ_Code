/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 318.cpp
*       &Created Time: 19Century 2019年12月08日 星期日 12时46分00秒 
*                          CST  Day/342 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int a, b, x, y, k;

void gcd(int a, int b){
    if (b == 0){
        x = 1;
        y = 0;
        return;
    }
    gcd(b, a % b);
    k = x;
    x = y;
    y = k - a / b * y;
    return;
}

int main(){
    cin >> a >> b;
    gcd(a, b);
    cout << (x + b) % b;
    return 0;
}

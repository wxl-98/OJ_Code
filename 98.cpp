/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 98.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 16时01分39秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define p 3.14
int main(){
    double r, h, s;
    cin >> r >> h;
    s = r * r * p;
    printf("%.2f\n%.2f\n", s, s * h);
    return 0;
}

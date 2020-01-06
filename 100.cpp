/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 100.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 16时07分36秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    int n;
    double sum = 0, l = 0.00417;
    cin >> n;
    for (int i = 1; i <= 6; i++){
        sum = (n + sum) * (1 + l);
    }
    printf("$%.2f\n", sum);
    return 0;
}

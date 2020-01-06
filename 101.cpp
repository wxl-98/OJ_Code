/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 101.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 16时19分00秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    int n, y, sum = 0;
    cin >> n;
    while (n > 0) {
        y = n % 10;
        sum += y;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}

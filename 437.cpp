/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 437.cpp
*       &Created Time: 19Century 2019年12月14日 星期六 09时43分35秒 
*                          CST  Day/348 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include  <cmath>
using namespace std;

int main(){
    int a, b, ans;
    cin >> a >> b;
    ans = ceil((a * 10 + b) / 26);
    cout << ans << endl;

    return 0;
}

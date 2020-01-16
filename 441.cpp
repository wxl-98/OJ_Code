/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 441.cpp
*       &Created Time: 19Century 2019年12月14日 星期六 10时21分04秒 
*                          CST  Day/348 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    int x, n, y, a, s;
    cin >> x >> n;
    y = (x + n) % 7;
    if (y > 0){
        s = (x + n) / 7;
        a = s * 4;
    }else {
        s = (x + n) / 7;
        a = s * 4 - 2;
    }
    int ans = 2 * n - a;
    cout << ans << endl;
    return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 439.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 22时42分15秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/

#include <iostream>
using namespace std;

int main(){
    double x, s = 2, sum = 0;
    int ans = 0;
    cin >> x;
    while (sum <= x){
        sum += s;
        s *= 0.98;
        ans++;
    }
    cout << ans << endl;

    return 0;
}

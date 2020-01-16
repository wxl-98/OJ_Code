/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 440.cpp
*       &Created Time: 19Century 2019年12月12日 星期四 15时15分12秒 
*                          CST  Day/346 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    int n, x, b, c, sum = 0;
   // int a[n];
    cin >> n >> x;
    for (int i = 1; i <= n; i++){
        b = i;
        while (b != 0){
            c = b % 10;
            b = b / 10;
            if (c == x) sum++;
        }
    }
    cout << sum << endl;
    return 0;
}

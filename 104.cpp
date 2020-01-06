/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 104.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 16时43分42秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a / 100 == 9 || a / 10 % 10 == 9 || a % 10 == 9){
        cout << "YES" << endl;
    } else 
        cout << "NO" << endl;

    return  0;
}

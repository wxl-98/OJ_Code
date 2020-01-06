/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 108.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 17时06分24秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    char c;
    double m, n;
    cin >> c >> m >> n;
    if (c == 'r') {
        printf ("%.2f\n", m * n);
    } else
        printf("%.2f\n", m * n / 2);
  //  cout << (c == 'r' ? m * n : m * n / 2) << endl;
    return 0;
}

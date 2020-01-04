/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 2.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 15时04分50秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    int grade;
    cin >> grade;
    if (grade >= 85 && grade <= 100) {
        cout << 'A';
    } else if (grade >= 75 && grade < 85) {
        cout << 'B';
    } else if (grade >= 60 && grade < 75) {
        cout << 'C';
    } else 
        cout << 'D';


    return 0;
}

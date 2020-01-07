/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 114.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 18时59分35秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    char x;
    cin >> x;
    switch(x){
        case 'h':
            cout << "He" << endl;
                break;
        case 'l':
            cout << "Li" << endl;
                break;
        case 'c':
            cout << "Cao" << endl;
                break;
        case 'd':
            cout << "Duan" << endl;
                break;
        case 'w':
            cout << "Wang" << endl;
                break;
        default : 
            cout << "Not Here" << endl;
    }
    
    return 0;
}

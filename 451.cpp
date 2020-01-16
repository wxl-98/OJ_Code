/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 451.cpp
*       &Created Time: 19Century 2019年12月14日 星期六 16时46分12秒 
*                          CST  Day/348 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, s[100000];
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> s[i];
    }
    
    sort (s, s + n, less<int>());
    for (int i = 0; i < n; i++){
        cout << s[i] << endl;
    }


    return 0;
}

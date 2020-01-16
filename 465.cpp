/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 465.cpp
*       &Created Time: 19Century 2019年12月07日 星期六 17时52分23秒 
*                          CST  Day/341 and Week/48 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int digit(long long n, int k){
    int y;
    for (int i = 0; i < k; i++){
        y = n % 10;
        n /= 10;
    }
    return y;
}

int main(){
    long long n, k;
    cin >> n >> k;
    cout << digit(n, k) << endl;

    return 0;
}

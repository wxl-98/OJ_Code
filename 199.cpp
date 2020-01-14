/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 199.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 21时03分55秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 100000

int a[11] = {0};
int m;
int b[MAX_N + 5] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int f(int x){
    int s = 0;
    if (x < 10) return x;
    if (!b[x]){
        for (int i = 0; i < 10; i++){
            b[x] += a[i] * f (x - i - 1);
        }
    }
    return b[x] % m;
}


int main(){
    int k;
    cin >> k >> m;
    for (int i = 0; i < 10; i++){
        cin >> a[i];
    }
    int s = f(k);
    cout << s << endl;

    
    


    return 0;
}

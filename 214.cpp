/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 214.cpp
*       &Created Time: 19Century 2019年12月14日 星期六 14时34分51秒 
*                          CST  Day/348 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    int a[30];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;

    sort (a, a + n, greater<int>());
    int sum = 0;
    for (int i = 0; i < m; i++){
        sum += a[i];
    }
   // cout << sum << endl; 
   // double s = sum / m;

    printf("%.2f\n",(double)sum / m);
    return 0;
}

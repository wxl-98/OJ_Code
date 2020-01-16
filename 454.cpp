/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 454.cpp
*       &Created Time: 19Century 2019年12月14日 星期六 15时13分01秒 
*                          CST  Day/348 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a, a + n, less<int>());
    int sum  = 0;
    for (int i = 0; i < n; i++){
        if (a[i] != a[i + 1]) {
           sum++;
        }
     }
     cout << sum << endl;
    int j = 0;
    for (int i = 0; i < n; i++){
        if (a[i] != a[i + 1]){
            j++;
        if (j != 1){ cout << " ";}
        cout << a[i];

    }
    }
    return 0;
}

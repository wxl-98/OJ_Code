/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 197.cpp
*       &Created Time: 2019年12月04日 星期三 18时41分26秒
*       &Description:
***********************************************************/
#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[11] = {0};
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    sort(a, a + 10, greater<int>());
    for (int i = 0; i < 10; i++) {
        if (i != 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}



/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 444.cpp
*       &Created Time:  2020年02月09日 星期日 16时06分13秒  CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main() {
    int n, num[100], x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    cin >> x;
    for (int i = n; i >= x; i--) {
        num[i + 1] = num[i];
    }
    num[x] = num[n + 1]; 
    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        cout << num[i];
    }
    cout << endl;
    return 0;
}

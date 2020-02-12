/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 447.cpp
*       &Created Time:  2020年02月09日 星期日 20时49分26秒  CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;


int main() {
    int n, flag = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int temp = i;
        do {
            if (temp % 10 == 4 || temp % 10 == 7) flag = 1;
            else {
                flag = 0;
                break;
            }
            temp /= 10;
        } while(temp);
        if (flag == 1 && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        } 
    }
    if (flag == 0) cout << "NO" << endl;
    return 0;
}

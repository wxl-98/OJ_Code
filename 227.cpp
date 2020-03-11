/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 227.cpp
*       &Created Time:  2020年03月11日 星期三 23时50分51秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

long long val(long long a, long long b, long long p) {
    long long ans = 0;
    a = a % p;
    while (b) {
        if (b & 1) ans = (ans + a) % p;
        b >>= 1;
        a = (a << 1) % p;
    }
    return ans % p;
}

int main() {
    long long a, b, p;
    cin >> a >> b >> p;
    cout << val(a, b, p) << endl;
    return 0;
}

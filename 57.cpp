/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 57.cpp
*       &Created Time:  2020年03月04日 星期三 18时13分28秒  CST  Day/064 and Week/09 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int is_val(int n) {
    if (n <= 9) return n;
    n -= 10;
    int a = 10, b = 2, num;
    while(n >= b * (a * 10 - a)) {
        n -= b * (a * 10 - a);
        a *= 10, b += 1;
    }

    num = n / b + a;
    for (int i = 0; i < b - n % b - 1; i++) num /= 10;
    return num % 10;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int ans = is_val(x) * is_val(y) * is_val(z);
    cout << ans << endl;
    return 0;
}

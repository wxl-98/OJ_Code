/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 236-2.cpp
*       &Created Time:  2020年03月11日 星期三 19时42分52秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int n, m, num[15], cnt;

void func(int s, int left) {
    if (left == 0) {
        for (int i = 0; i < cnt; i++) {
            if (i) cout << " ";
            cout << num[i];
        }
        cout << endl;
        return ;
    }
    for (int i = s; i <= n - left + 1; i++) {
        num[cnt] = i;
        cnt++;
        func(i + 1, left - 1);
        cnt--;
    }
 }


int main() {
    cin >> n >> m;
    func(1, m);

    return 0;
}

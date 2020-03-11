/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 237.cpp
*       &Created Time:  2020年03月11日 星期三 19时48分36秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int n, num[15], cnt, mark[15];

void func(int left) {
    if (left == 0) {
        for (int i = 0; i < cnt; i++) {
            if (i) cout << " ";
            cout << num[i];
        }
        cout << endl;
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if(mark[i] == 0) {
            mark[i] = 1;
            num[cnt] = i;
            cnt++;
            func(left - 1);
            cnt--;
            mark[i] = 0;
        }
        
    }
 }


int main() {
    cin >> n;
    func(n);

    return 0;
}


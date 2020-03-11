/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 83-2.cpp
*       &Created Time:  2020年03月11日 星期三 20时27分32秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int num[10], cnt;

void p() {
    for (int i = 0; i < cnt; i++) {
    
    }
    cout << endl;
}


int func(int s, int left_num, int left_cnt) {
    if(left_cnt == 0) {
        if (left_num == 0) {
            p();
            return 1;
        }
        return 0;
    }
    int ans = 0;
    for (int i = s; i <= left_num; i++) {
        num[cnt] = i;
        cnt++;
        ans += func(i, left_num - i, left_cnt - 1);
        cnt--;
    }
    return ans;
}



int main() {
    int n, m;
    cin >> n >> m;
    cout << func(1, n, m) << endl;
    return 0;
}

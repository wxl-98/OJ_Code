/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 235-1.cpp
*       &Created Time:  2020年03月11日 星期三 19时06分40秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int n, num[15], cnt;  // n是上限,num存答案的数组,cnt计数器

void p() {
    for (int i = 0;  i < cnt; i++) {
        if (i) cout << " ";
        cout << num[i];
    }
    cout << endl;
}


void func(int s) {
    for (int i = s; i <= n; i++) {
        num[cnt++] = i;
       // cnt++;
        p();
        func(i + 1);
        cnt--;
    }
}

int main() {
    cin >> n;
    func(1);

    return 0;
}

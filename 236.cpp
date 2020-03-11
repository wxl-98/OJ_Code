/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 236.cpp
*       &Created Time:  2020年03月11日 星期三 19时25分02秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <vector>
using namespace std;

int n, m;

vector<int> ch;

void func(int x) {
    if (ch.size() > m || ch.size() + (n - x + 1) < m) {
        return ;
    }
    if (x == n + 1) {
        for (int i = 0; i < ch.size(); i++) {
            printf("%d ", ch[i]);
        }
        cout << endl;
        return ;
    }
    func(x + 1);
    ch.push_back(x);
    func(x + 1);
    ch.pop_back();
}

int main() {
    cin >> n >> m;
    func(1);

    return 0;
}

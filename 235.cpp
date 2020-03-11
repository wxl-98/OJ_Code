/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 235.cpp
*       &Created Time:  2020年03月11日 星期三 18时07分19秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cstdio>
using namespace std;

int s[25];

void output(int ind,int n,int k, int *str) {
    if (ind == n) {
        return;
    }
    
    for (int i = ind+1; i <= n; i++) {
        str[k] = i;
        for(int j = 0; j <= k;j++) {
            if (j != 0) {
                cout << " ";
            }
            cout << str[j];
        }
        cout << endl;
        output(i, n, k + 1, str);
    }
    return ;
}


int main() {
    int n;
    cin >> n;
    output(0,n,0,s);
    return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 240.cpp
*       &Created Time:  2020年03月11日 星期三 18时08分43秒  CST  Day/071 and Week/10 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;

#define MAX_N 800
char str[MAX_N + 5][MAX_N + 5];

void output(int n, int i ,int j){
    if (n == 1) {
        str[i][j] = 'X';
        return ;
    }
    int c = (int)pow(3, n - 2);
    output (n - 1, i, j);
    output (n - 1, i, j + 2 * c);
    output (n - 1, i + c , j + c);
    output (n - 1, i + 2 * c, j);
    output (n - 1, i + 2 * c, j + 2 * c);
    return ;
}

int main() {
    int n;
    while ( cin >> n ) {
        if (n == -1) break;
        output(n, 0, 0);
        int length = (int) pow(3, n - 1);
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length; j++) {
                if (str[i][j] == 'X') cout << str[i][j];
                else cout << " ";
            }
            cout << endl;
        }
        cout << "-" <<endl;
    }
    return 0;
}

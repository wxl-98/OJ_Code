/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 56.cpp
*       &Created Time:  2020年03月04日 星期三 18时02分50秒  CST  Day/064 and Week/09 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 500000

int num[10];

int main() {
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= x; i++) num[i] = i;
    int k = y - 1;
    do {
        next_permutation(num + 1, num + x + 1);
        k--;
    } while (k);

    for (int i = 1; i <= x; i++) {
        cout << num[i];
    }
    cout << endl;
    return 0;
}


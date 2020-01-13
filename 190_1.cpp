/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 190_1.cpp
*       &Created Time: 19Century 2019年12月21日 星期六 19时52分00秒 
*                          CST  Day/355 and Week/50 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 8000000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {1, 1, 0};

void init() {
  //  int n;
//    cin >> n;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            is_prime[prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

void value(int n) {
    int sum = 0;
    for (int i = 2; i * 2 <= n; i++) {
        if (!is_prime[i] && !is_prime[n - i]) {
            sum ++;
        }
    }
    cout << sum << endl;
}

int main () {
    init();
    int n;
    while(cin >> n) value(n);
    return 0;
}

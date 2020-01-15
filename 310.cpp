/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 310.cpp
*       &Created Time: 19Century 2019年12月28日 星期六 14时07分24秒 
*                          CST  Day/362 and Week/51 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int f[MAX_N + 5] = {0};
int cnt[MAX_N + 5] = {0};

void init(int n) {
    for (int i = 2; i <= n; i++) {
        if (!prime[i]){
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
   // init();
    long long n;
    cin >> n;
    init(n);
    for (int j = 1; j <= prime[0]; j++) {
        long long tmp = prime[j], cnt = 0;
        while (tmp <= n) {
            cnt += n / tmp;
            tmp *= prime[j];
        }    
        cout << prime[j] << " " << cnt << endl;
    }
    return 0;
}

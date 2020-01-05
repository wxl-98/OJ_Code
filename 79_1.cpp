/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 79_1.cpp
*       &Created Time: 19Century 2019年12月17日 星期二 15时59分44秒 
*                          CST  Day/351 and Week/50 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#define MAX_N 10000000
int prime[MAX_N + 5] = {0};

int main() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
    
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 1) a = 2;
    for (int i = a; i <= b; i++) {
        if (prime[i]) continue;
        printf("%d\n", i);
    }
    return 0;
}

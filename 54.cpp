/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 54.cpp
*       &Created Time: 19Century 2019年12月21日 星期六 18时02分53秒 
*                          CST  Day/355 and Week/50 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <string.h>
#define MAX_N 1500

int ans[MAX_N + 5];
int res[MAX_N + 5];


void value(int x) {
    memset(ans, 0, sizeof(ans));
    ans[0] = 1, ans[1] = 1;
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= ans[0]; j++) {
            ans[j] *= i; 
        }
        for (int k = 1; k <= ans[0]; k++) {
            if (ans[k] < 10) continue;
            ans[k + 1] += ans[k] / 10;
            ans[k] %= 10;
            ans[0] += (ans[0] == k);
        }
    }
    memset(res, 0, sizeof(res));
    res[0] = 1, res[1] = 1;
    for (int i = 1; i <= ans[0]; i++) {
        if (!ans[i]) continue;
        for (int j = 1; j <= res[0]; j++) {
            res[j] *= ans[i];
        }
        for (int k = 1; k <= res[0]; k++) {
            if (res[k] < 10) continue;
            res[k + 1] += res[k] / 10;
            res[k] %= 10;
            res[0] += (res[0] == k);
        }
    }

    for (int i = res[0]; i > 0; i--) {
        printf ("%d", res[i]);
    }
    printf("\n");
}


int main() {
    int x;
    while (scanf("%d", &x) != EOF) value(x);
    return 0;
    
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 472.cpp
*       &Created Time:  2020年03月12日 星期四 00时16分45秒  CST  Day/072 and Week/10 of this year
*       &Description:
***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int val(int num[], int a, int len) {
    int ans = 0;
    for (int i = 0; i < len; i++) {
        ans = ((ans * 10) + num[i]) % a;
    }
    return ans;
}

int main() {
    char str[1005];
    int a[1005], b, len;
    while (~scanf("%d %s", &b, str)) {
        len = strlen(str);
        for (int i = 0; i < len; i++) {
            a[i] = str[i] - '0';
        }
        printf("%d\n", val(a, b, len));
    }
    return 0;
}

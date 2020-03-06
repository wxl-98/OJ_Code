/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 59.cpp
*       &Created Time:  2020年03月04日 星期三 18时14分10秒  CST  Day/064 and Week/09 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdarg.h>

#define Plog(frm, arg...) { \
    printf("[ %s : %d -> output ] " frm "\n", __func__, __LINE__, ##arg); \
    fflush(stdout); \
}

int sum(int n, ...);

void haizei_test() {
    Plog("%d", sum(2, 1, 3));
    Plog("%d", sum(2, 2, 4));
    Plog("%d", sum(10, 5, 3, 6, 9, 10, 11, 1998, 10287, 987, 18713));
    Plog("%d", sum(3, 1, 9, 8, 7, 4));
}

int main() {
    haizei_test();
    return 0;
}

int sum(int n, ...) {
    //TODO

    va_list arg;
    va_start(arg, n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int s = va_arg(arg, int);
        sum += s;
    }
    return sum;
}

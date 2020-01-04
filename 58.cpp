/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 58.cpp
*       &Created Time: 19Century 2019年12月13日 星期五 21时56分17秒 
*                          CST  Day/347 and Week/49 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) a > b ? a : b; 

#define Plog(frm, arg...) 

void haizei_test() {
    int a = 6;
    Plog("%d", MAX(2, 3));
    Plog("%d", 5 + MAX(2, 3));
    Plog("%d", MAX(2, MAX(3, 4)));
    Plog("%d", MAX(2, 3 > 4 ? 3 : 4));
    Plog("%d", MAX(a++, 6));
    Plog("a value = %d", a);
}

int main() {
    haizei_test();
    return 0;
}

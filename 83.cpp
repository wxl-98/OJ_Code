/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 83.cpp
*       &Created Time:  2020年03月09日 星期一 23时39分03秒  CST  Day/069 and Week/10 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
 
int select(int n, int m)
{
    int *ary = (int*)malloc(sizeof(int) * m);
    int cur = 0;
    int sum = 0;
    int i = 0;
    int count = 0;
    for (; i < m; ++i)
        ary[i] = 1;
    while (1){
        while (cur < m - 1 && sum + ary[cur] < n)
            sum += ary[cur++];       
        if (cur == m - 1 && n - sum >= ary[m - 2])
            ++count;
        if (cur - 1 < 0)
            break;
        sum -= ary[--cur]++;  
        for (i = cur + 1; i < m; ++i)
            ary[i] = ary[cur];
    } 
    if (ary) free(ary);
    return count;
 
}
 
int main() 
{ 
    int n = 0, m  = 0;
    while(scanf("%d %d",&n, &m) != EOF)
    {
        if (n / m <= 0)
            continue;
        printf("%d\n", select(n, m));
    }
    return 0;
} 

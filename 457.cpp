/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 457.cpp
*       &Created Time:  2020年02月10日 星期一 17时24分20秒  CST  Day/041 and Week/06 of this year
*       &Description:
***********************************************************/

#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;
bool a[100000005];

int main()
{
    int n;
    int now,last = 0;
    scanf("%d",&n);
    for(int i = 1;i <= n;++ i)
    {
        scanf("%d",&now);
        a[abs(now - last)] = true;
        last = now;
    }
    for(int i = 1;i < n;++ i)
    {
        if(a[i] != true)
        {
            cout << "Not jolly" << endl;
            return 0;
        }
    }
    cout << "Jolly" << endl;
    return 0;
}


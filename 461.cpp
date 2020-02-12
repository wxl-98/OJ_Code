/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 461.cpp
*       &Created Time:  2020年02月10日 星期一 18时24分54秒  CST  Day/041 and Week/06 of this year
*       &Description:
***********************************************************/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    struct student {
        int sco;
        char name;
        char a[100];
    } stu[n];
    int s = 0, l = 0;
    for(int i = 0; i < n; i++) {
        cin >> stu[i].name;
        if(stu[i].name == 'C') cin >> stu[i].a, s++;
        else {
            cin >> stu[i].sco;
            l += stu[i].sco;
        }
    }
    int x = l / (n - s);
    cout << s << " " << x << endl;
    return 0;
}


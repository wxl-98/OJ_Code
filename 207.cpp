/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 207.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 16时54分20秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    int num[4], sum;
    string name;
};
  

int main() {
    int n, ans = 0;
    int max = 0, min = 400;
    cin >> n;
    student a[35];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name ;
        a[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            int tmp;
            cin >> tmp;
            a[i].num[j] = tmp;
            a[i].sum += tmp;
            if (max < tmp) {
                max = tmp;
            }
            if (min > tmp) {
                min = tmp;
            }
        }
        cout << a[i].sum << endl;
        if (a[ans].sum < a[i].sum) {
            ans = i;
        }
    }
    cout << a[ans].name << endl;
    cout << max <<" " << min << endl;
    return 0;
}

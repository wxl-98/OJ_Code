/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 218.cpp
*       &Created Time:  2020年02月09日 星期日 15时27分35秒  CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    int height, num;
};

bool val(student a, student b) {
    if (a.height == b.height) {
        return a.num < b.num;
    }
    return a.height < b.height;
}


int main() {
    int n;
    cin >> n;
    student s[1000005];
    for (int i = 0; i < n; i++) {
        cin >> s[i].height;
        s[i].num = i + 1;
    }
    sort(s, s + n, val);
    for (int i = 0; i < n; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].num;
    }
    cout << endl;
    return 0;
}

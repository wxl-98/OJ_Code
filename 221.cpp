/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 221.cpp
*       &Created Time:  2020年02月09日 星期日 15时50分08秒  CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    int num, height, ans;
};

bool cmp1(student a, student b) {
    return a.height < b.height;
}

bool cmp2(student a, student b) {
    return a.num < b.num;
}

int main() {
    int n, m;
    cin >> n >> m;
    student s[100005];
    int hei[100005];
    for (int i = 0; i < n; i++) {
        cin >> s[i].height;
        s[i].num = i;
        s[i].ans = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> hei[i];
    }
    sort(hei, hei + m);
    sort(s, s + n, cmp1);
    int index = 0;
    for (int i = 0; i < n; i++) {
        while(s[i].height >= hei[index] && index < m) {
            s[i].ans++;
            index++;
        }
    }
    sort(s, s + n, cmp2);
    for (int i = 0; i < n; i++) {
        cout << s[i].ans << endl;
    }
    return 0;
}

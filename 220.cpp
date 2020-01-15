/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 220.cpp
*       &Created Time: 20Century 2020年01月04日 星期六 15时40分46秒 
*                          CST  Day/004 and Week/00 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct student{
    int a, b, c, d, sum;
    string name;
};

bool val1(student a, student b) {
    if (a.a == b.a) {
        return a.name < b.name;
    }
    return a.a > b.a;
}

bool val2(student a, student b) {
    if (a.b == b.b) {
        return a.name < b.name;
    }
    return a.b > b.b;
}
bool val3(student a, student b) {
    if (a.c == b.c) {
        return a.name < b.name;
    }
    return a.c > b.c;
}
bool val4(student a, student b) {
    if (a.d == b.d) {
        return a.name < b.name;
    }
    return a.d > b.d;
}

bool val5(student a, student b) {
    if (a.sum == b.sum) {
        return a.name < b. name;
    }
    return a.sum > b.sum;
}

int main() {
    int n;
    cin >> n;
    student s[105];
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].a >> s[i].b >> s[i].c >> s[i].d;
        s[i].sum = s[i].a + s[i].b + s[i].c + s[i].d;
    }
    sort(s, s + n, val1);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    sort(s, s + n, val2);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    sort(s, s + n, val3);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    sort(s, s + n, val4);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    sort(s, s + n, val5);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 212-1.cpp
*       &Created Time: 19Century 2019年12月24日 星期二 20时30分15秒 
*                          CST  Day/358 and Week/51 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Stu {
    char name[50];
} arr[10];

int cmp(struct Stu a, struct Stu b) {
    int t = strcmp(a.name, b.name);
    return t < 0;
}

int main() {
    for (int i = 0; i < 10; i++) {
        cin >> arr[i].name;
    }
    sort(arr, arr + 10, cmp);

    for (int i = 0; i < 10; i++) {
        cout << arr[i].name << endl;
    }

    return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 458.cpp
*       &Created Time:  2020年02月10日 星期一 17时59分22秒  CST  Day/041 and Week/06 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <cmath>
using namespace std;

struct student {
    string name, age;
    int y, m;
};

const int MAX_N = 100;
student a[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    student s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].name >> a[i].age >> a[i].y >> a[i].m;  

    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i].y < a[j].y || a[i].y == a[j].y && a[i].m < a[j].m) {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i].name << " " << a[i].age << " ";
        cout << a[i].y << " " << a[i].m << endl;
    }

    return 0;
}

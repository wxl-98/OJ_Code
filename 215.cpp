/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 215.cpp
*       &Created Time: 19Century 2019年12月14日 星期六 14时51分28秒 
*                          CST  Day/348 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    int sum;
    string name;
};

bool val(student a, student b) {
    return a.sum > b.sum;
}


int main(){
    student s[50];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s[i].name;
        s[i].sum = 0;
        for (int j = 0; j < 4; j++){
            int tmp;
            cin >> tmp;
            s[i].sum += tmp;
        }
    }
    sort(s, s + n, val);
    for (int i = 0; i < 3; i++) {
        cout << s[i].name << endl;
    }



    return 0;
}

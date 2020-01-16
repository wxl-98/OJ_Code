/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 459.cpp
*       &Created Time: 19Century 2019年12月31日 星期二 22时30分05秒 
*                          CST  Day/365 and Week/52 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;


int main() {
struct student {
    string name;
    int age;
    double w;
    char sex;
};
    student stu;
    cin >> stu.name >> stu.sex >> stu.age >> stu.w;
    cout << stu.name << " " << stu.sex << " " << stu.age << " " << stu.w;
    return 0;
}

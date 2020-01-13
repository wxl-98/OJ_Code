/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 177.cpp
*       &Created Time: 19Century 2019年12月12日 星期四 16时00分14秒 
*                          CST  Day/346 and Week/49 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    string l;
    cin >> l;
    int len = l.size();
    char l1[3];
    cout << l << endl;
    for (int i = 1; i < l.size(); i++){
        l1[0] = l[l.size() - 2];
        l1[1] = l[l.size() - 1];
        for (int j = l.size() - 3, k = l.size() - 1; k >= 2; j--, k--){
            l[k] = l[j];
        }
        l[0] = l1[0];
        l[1] = l1[1];
        cout << l << endl;

}
    return 0;
}

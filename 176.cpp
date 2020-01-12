/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 176.cpp
*       &Created Time: 19Century 2019年12月06日 星期五 22时50分33秒 
*                          CST  Day/340 and Week/48 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        ans = 0;
        for (int j = i, k = 0; j < i + b.size(); j++, k++) {
            if (a[j] == b[k]){
                ans++;
            }
        }
        if (ans == b.size()){
            sum++;
        }   
    }
    cout << sum << endl;
    return 0;

}

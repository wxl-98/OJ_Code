/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 213.cpp
*       &Created Time: 2019年12月04日 星期三 12时41分57秒
*       &Description:
***********************************************************/
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    int n;
    int s = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int a[30], b[6];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());

    for (int i = 0; i < n; i++){
        cout << a[i] << endl;
        if (a[i] == 100) {
            s++;
        }else if (a[i] >= 90 && a[i] <= 99) {
            s1++;
        } else if (a[i] >= 80 && a[i] <= 89) {
            s2++;
        } else if (a[i] >= 70 && a[i] <= 79) {
            s3++;
        } else if (a[i] >= 60 && a[i] <= 69) {
            s4++;
        } else {
            s5++;
        }
    }
    cout << s << " " << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << endl;

    return 0;
}


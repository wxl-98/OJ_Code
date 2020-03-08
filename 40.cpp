/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 40.cpp
*       &Created Time:  2020年03月08日 星期日 12时48分30秒  CST  Day/068 and Week/10 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int f[505][200];

void add(int f[505][200],int m) {
    for (int i = 0; i < 200; i++) {
        f[m][i] = f[m-2][i] + f[m-3][i];
    }
    for(int i = 0; i < 200; i++) {
        if(f[m][i] >= 10) {
            f[m][i+1]++ ;
            f[m][i] %= 10;
        }
    }
}

int main() {
    int n, flag = 0;
    cin >> n;
    memset(f,0,sizeof(f));
    f[1][0] = 0;
    f[0][0] = f[2][0] = f[3][0] = 1;
	if(n == 1) {
		cout << "0" << endl;
	}
	else if( n <= 4) {
		cout << "1" << endl;
	}
    else if(n > 4) {
        for(int i = 4; i <= n; i++) {
            add(f, i);
        }
        for(int i = 199; i >= 0; i--) {
            if(f[n][i] != 0){
                flag = 1;
            }
            if(flag == 1) {
                cout << f[n][i];
            }
        }
    }
    return 0;
}

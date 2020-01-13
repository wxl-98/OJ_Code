/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 186.cpp
*       &Created Time: 2019年12月02日 星期一 22时27分27秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
#define MAX_N 100000

int n, str[MAX_N + 5];

int f(int x, int w) {
    if (w >= n) {
        return x - 1;
    }
    return f(x + 1, w + str[w]);
}

int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> str[i];
	}
	cout << f(1, 0) << endl;
	return 0;
}

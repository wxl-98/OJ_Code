/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 468.cpp
*       &Created Time: 2019年12月02日 星期一 22时51分27秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int zui(int m, int n){
	if (m % n == 0) return n;
	return zui(n, m%n);
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << zui(a, b) << endl;

	return 0;
}

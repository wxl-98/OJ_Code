/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 109.cpp
*       &Created Time: 2019年12月05日 星期四 18时59分57秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int a, flag = 1;
	cin >> a;
	while(a && flag){
		flag = (a % 10) & 1;
		a /= 10;
	}
	cout << (flag ? "NO" : "YES") << endl;
	return 0;
}

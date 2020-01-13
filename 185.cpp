/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 185.cpp
*       &Created Time: 2019年11月30日 星期六 21时27分02秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int fib(int n){
	if (n == 1 || n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}


int main(){
	int a;
	cin >> a;
	cout << fib(a) << endl;
	return 0;
}

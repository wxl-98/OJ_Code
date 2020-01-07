/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 115.cpp
*       &Created Time: 2019年12月05日 星期四 19时30分12秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	if (x == y){
		cout << 100 << endl;
	}else if (x / 10 == y % 10 && x % 10 == y / 10){
		cout << 20 << endl;
	}else if (x / 10 == y / 10 || x % 10 == y / 10){
		cout << 2 << endl;

	}else if (x / 10 == y % 10 || x % 10 == y % 10){
		cout << 2 << endl;
	}else {
		cout << 0 << endl;
	}

	return 0;
}

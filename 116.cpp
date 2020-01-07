/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 116.cpp
*       &Created Time: 2019年12月05日 星期四 19时34分56秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	int f = a * a + b * b - c * c;
	cin >> a >> b >> c;
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a + b <= c){
		cout << "illegal triabgle" << endl;
	}else if (f == 0){
		cout << "right triangle" << endl;
	}else if (f < 0){
		cout << "obtuse triangle" << endl;
	} else {
		cout << "acute triangle" << endl;
	}

	return 0;
}

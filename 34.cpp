/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 34.cpp
*       &Created Time: 2019年11月30日 星期六 23时00分13秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int year;
	cin >> year;
	if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0){
		printf("L");
	}else {
		printf("N");
	}

	return 0;
}

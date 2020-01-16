/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 438.cpp
*       &Created Time: 2019年12月04日 星期三 13时29分13秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if (n <= 240){
		printf("%.1f", 0.4783 * n);
	}else if (n >= 241 && n <= 400){
		printf("%.1f", 0.4783 * 240 + 0.5283 * (n - 240));
	}else if (n >= 401){
		printf("%.1f", 0.4783 * 240 + 0.5283 * (400 - 240) + 0.7783 * (n -400));
	}

	return 0;
}

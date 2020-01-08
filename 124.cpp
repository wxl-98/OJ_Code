/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 124.cpp
*       &Created Time: 2019年11月27日 星期三 13时31分24秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((b <= 50 || a == 1 || a == 2) && (c <= 25 || d >= 5)){
		printf("ok");
	}else {
		printf ("pass");
	}
	return 0;
}

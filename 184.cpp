/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 184.cpp
*       &Created Time: 2019年12月02日 星期一 17时15分34秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int n, s = 1;
	cin >> n;
	for (int i = n; i > 1; i--){
		s = (s + 1)* 2;
	}
	printf("%d", s);
	return 0;
}

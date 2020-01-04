/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 33.cpp
*       &Created Time: 2019年11月30日 星期六 23时58分41秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	double m, n, s;
	int p;
	cin >> m >> n >> p;
	if (p == 1){
		s = (m + n) * 1.087 / 2;
		printf ("%.2f", s);
	}else if (p == 0){
		s = (m * 0.973 + n) / 2;
		printf("%.2f", s);
	}
	return 0;
}

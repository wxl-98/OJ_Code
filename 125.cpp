/***********************************************************
*       &Author: Wang xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 125.cpp
*       &Created Time: 2019年11月27日 星期三 14时12分56秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int h, m, s, t, h1;
	cin >> h >> m >> s >> t;
	h1 = h * 3600 + m * 60 + s + t;
	if (h1 >= 86400){
	    h1 -= 86400;
	}
	if (h1 < 43200){
		if (h1 < 3600)
			h1 += 43200;
		cout << h1 / 3600 << ":" << h1 % 3600 / 60 << ":" << h1 % 60 << "am" << endl;
	}else {
		h1 -= 43200;
		if (h1 < 3600){
			h1 += 43200;
		}
		cout << h1 / 3600 << ":" << h1 % 3600 / 60 << ":" << h1 % 60 << "pm" << endl;
	}

	printf("%.2lf%%\n", t / 86400.0 * 100);
   return 0;
}

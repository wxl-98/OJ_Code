/***********************************************************
*       &Author: wang xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 122.cpp
*       &Created Time: 2019年11月27日 星期三 13时38分13秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

char str[][10] = {"am", "pm", "midnoon"};

int main(){
	int t, h, m, s, flag = 0;
	cin >> t;
	h = t / 3600;
	m = t % 3600 / 60;
	s = t % 60;

	if (h > 12) h -= 12, flag = 1;
	printf("%02d:%02d:%02d", h, m, s);
	flag += 2 * (h == 12);
	printf(" ", flag[]);
	return 0;
}

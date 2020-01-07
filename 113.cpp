/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 113.cpp
*       &Created Time: 2019年11月27日 星期三 15时48分44秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
	int y, m;
	cin >> y >> m;
	cout << (day[m] + (m == 2 && (y % 400 == 0||(y % 4 == 0 && y %100 != 0))));

	return 0;


}

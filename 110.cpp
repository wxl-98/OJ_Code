/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 110.cpp
*       &Created Time: 2019年11月26日 星期二 22时03分38秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	double x, y;
	cin >> x;
	y = (x > 15 ? 15 : x) * 6 +(x > 15) * (x - 15) * 9;
	printf("%.2f\n", y);

	return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 130.cpp
*       &Created Time: 2019年11月27日 星期三 15时37分10秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int m, n;
	double sum = 0;
	cin >> m >> n;
	for (int i = 1; i <= n; i++){
		sum = (m + sum) * (1 + 0.00417);
	}
	printf("$%.2f",sum);
	return 0;
}

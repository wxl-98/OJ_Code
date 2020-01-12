/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 165.cpp
*       &Created Time: 2019年12月02日 星期一 19时15分27秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long c;
	cin >> c;
	int sum = 0;
	for (long long i = 1; i < c; i++){
		long long b = sqrt(c * c - i * i);
		if (i * i + b * b == c * c){
			sum++;
		}
	}
	printf("%d", sum / 2);
}

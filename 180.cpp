/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 180.cpp
*       &Created Time: 2019年12月02日 星期一 16时44分38秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

long long pow(int n){
	long long s = 1;
	for (int i = 0; i < n; i++){
		s *= 2;
	}
	return s;
}


int main(){
	int n;
	cin >> n;
	long long sum = pow(2, n);
	printf("%lld", sum);
//	cout << sum << endl;
	return 0;
}

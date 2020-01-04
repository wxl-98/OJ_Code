/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 37.cpp
*       &Created Time: 2019年12月06日 星期五 19时49分30秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int m, n, sum = 0;
	cin >> m >> n;
	for (int i = m; i <= n; i++){
		if (!(i % 2 == 0 && i % 5 == 0 )){
		//	cout << i << endl;
			sum ++;
		}
	}
	cout << sum << endl;
	return 0;
}

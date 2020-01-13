/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 182.cpp
*       &Created Time: 2019年11月29日 星期五 10时58分27秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n], max;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	max = a[n-1];
	for (int i = 0; i < n; i++){
		if (a[i] > max){
			max = a[i];
		}
	}
	printf ("%d", max);
	return 0;
}

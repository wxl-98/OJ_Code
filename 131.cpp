/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 131.cpp
*       &Created Time: 2019年11月29日 星期五 15时41分55秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n, min, max;
	cin >> n;
	int a[n]; 
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	min = a[0];
	max = a[n - 1];

	for (int i = 0; i < n; i++){
		if (a[i] < min){
			min = a[i];
		}
		if (a[i] > max){
			max = a[i];
		}
	}
	printf ("%d", max - min);
	return 0;
}

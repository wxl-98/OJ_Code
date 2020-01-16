/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 466.cpp
*       &Created Time: 2019年11月29日 星期五 15时11分15秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <stdbool.h>
inline bool panduan(int n){
    int a, y = 0;
	a = n;
	while (a){
		y = y * 10 + a % 10;
		a = a / 10;
	}
	if (y == n){
		return true;
	}
	return false;
}


int main(){
	int m, sum = 0;
	scanf("%d", &m);
	for (int i = 1; i <= m; i++){
		if (panduan(i)){
			sum++;
		}
	}
	printf("%d", sum);
	return 0;

}

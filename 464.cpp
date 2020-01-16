/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 464.cpp
*       &Created Time: 2019年11月29日 星期五 14时37分09秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <stdbool.h>

inline bool panduan(int y){
	if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0){
		return true;
	}
	return false;
}


int main(){
	int x, y, sum = 0;
	scanf("%d %d", &x, &y);
	for (int i = x; i <= y; i++){
		if (panduan(i)){
			sum++;
		}
	}
	printf ("%d", sum);
	return 0;
}

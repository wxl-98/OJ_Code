/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 79.cpp
*       &Created Time: 2019年11月29日 星期五 10时12分29秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <stdbool.h>
inline bool panduan(int n){
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) return false;
	}return true;
}
int main(){
    long a, b;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++){
        if(panduan(i)){
	    printf("%d\n", i);
		}
	}
	return 0;
}

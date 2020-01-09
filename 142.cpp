/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 142.cpp
*       &Created Time: 2019年11月29日 星期五 20时47分21秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <stdbool.h>

inline bool zhi(int n){
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) return false;
	}
	return true;
}

inline bool hui(int a){
	int y, sum = 0;
	y = a;
	while(y){
       sum = sum * 10 + y % 10;
       y = y / 10;
	}
	if (sum == a) return true;
	return false;
}

int main(){
	int b, c;
	int flag = 0;
	scanf("%d %d", &b, &c);
	for (int i = b; i <= c; i++){
		if (zhi(i)&&hui(i)){
			if (flag == 0){
				printf("%d", i);
				flag =1;
			}else{
			printf(" %d",i);
			}
		}
	}
	return 0;
}

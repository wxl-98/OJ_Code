/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 188.cpp
*       &Created Time: 2019年11月28日 星期四 16时52分07秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <stdbool.h>
//using namespace std;

inline bool panduan(int n){
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) return false;
	}
		return true;
}

int main(){
	int m, n;
	scanf ("%d %d", &n, &m);
	for (int i = m; i <= n; i++){
		if (panduan(i)){
			printf("%d\n",i);
		}
	}
	return 0;
}

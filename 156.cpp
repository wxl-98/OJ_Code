/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 156.cpp
*       &Created Time: 2019年12月01日 星期日 11时19分54秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
inline bool zhi(int n){
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) return false;
	}
	return true;
}

inline bool ping(int i){
	int j = sqrt(i);
	if (i == j * j) return true;
	return false;
}

int main(){
int a, b, c, d, sum = 0;
int flag = 0;
scanf("%d %d", &a, &b);
for (int i = a; i <= b; i++){
	c = i / 100;
	d = i % 100;
	if (zhi(i) && ping(c) && ping(d)){
		sum += 1;
		if (flag == 0){
		printf ("%d", i);
		}else {
		printf(" %d", i);
		}
		flag += 1;
	//	printf("\n");
	}
//	printf("\n");
}
printf("\n");
printf("%d", sum);
return 0;
}

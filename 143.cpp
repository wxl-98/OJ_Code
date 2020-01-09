/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 143.cpp
*       &Created Time: 2019年11月30日 星期六 11时37分25秒
*       &Description:
***********************************************************/
//#include <iostream>
//using namespace std;
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
inline bool liu(int n){
	if (n % 6 == 0) return true;
	return false;
}

inline bool zhi(int a){
	if (a < 2) return false;
	for (int i = 2; i * i < a; i++){
		if (a % i == 0) return false;
	}
	return true;
}

int ping(int b){
	int i = sqrt(b);
	if (b == i * i) return 1;
	return 0;
}

int main(){
	int a, b, sum = 0, s, c;
//	cin >> a >> b;
	int flag = 0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++){
		s = i / 100;
		c = i % 100;
		if (liu(i) && zhi(s) && ping(c)){
			sum += 1;
			if (flag == 0){
				printf ("%d", i);
			}else {
			printf (" %d", i);
			}
			flag += 1;
		}
	}
	printf ("\n");
	printf ("%d",sum);
	return 0;
}

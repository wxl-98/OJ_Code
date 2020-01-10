/*********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 153.cpp
*       &Created Time: 2019年12月02日 星期一 00时03分47秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int y, m, d, h, q, k, j,m1, m2;
	cin >> y >> m >> d;
	j = y / 100;
	k = y % 100;
       int    j1 = (y-1) / 100;
       int  k2 = (y-1) % 100;
	if (m == 1){
		m1 = 13;
		h =(d + 26 * (m1 + 1) / 10 + k2 + k2/ 4 +j1/ 4 + 5 * j1 )% 7;
		if (h == 0){
			printf("6");
		}else if (h == 1){
			printf("7");
		}else if (h == 2){
			printf("1");
		}else if(h == 3){
			printf("2");
		}else if(h == 4){
			printf("3");
		}else if(h == 5){
			printf("4");
		}else {
			printf("5");
		}
	}else if (m == 2){
		m2 = 14;
	    //y -= 1;
		h =(d + 26 * (m2 + 1) / 10 + (y - 1 ) % 100 + (y - 1 ) %100 / 4 + (y - 1 ) /100 / 4 + 5 * (y - 1 ) /100) % 7;
		if (h == 0){
			printf("6");
		}else if (h == 1){
			printf("7");
		}else if (h == 2){
			printf("1");
		}else if(h == 3){
			printf("2");
		}else if(h == 4){
			printf("3");
		}else if(h == 5){
			printf("4");
		}else {
			printf("5");
		}

	}else {
//			m = 13;
//	    y -= 1;
		h =(d + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
		if (h == 0){
			printf("6");
		}else if (h == 1){
			printf("7");
		}else if (h == 2){
			printf("1");
		}else if(h == 3){
			printf("2");
		}else if(h == 4){
			printf("3");
		}else if(h == 5){
			printf("4");
		}else {
			printf("5");
		}
	}
	return 0;
	}

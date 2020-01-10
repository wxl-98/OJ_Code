/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 144.cpp
*       &Created Time: 2019年11月28日 星期四 14时53分35秒
*       &Description:
***********************************************************/
#include <stdio.h>
//using namespace std;
int main(){
	char c[1000];
    int sum = 0;
	scanf("%s",c);
	for (int i = 0; i <= c[1000]; i++){
		if (c[i] == 'A')
			sum++;
	}
		printf("%d",sum);
	
	return 0;
}

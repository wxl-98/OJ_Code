/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 173.cpp
*       &Created Time: 2019年11月30日 星期六 15时58分13秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <string.h>
//using namespace std;
int main(){
	char a;
	scanf("%s", a);
	int s = 0, s1 = 0, s2 = 0, s3 = 0;
	while ((a = getchar()) != '\n'){
		if ((a >= 'a' && a <= 'z')||(a >= 'A' && a <= 'Z')){
			s++;
		}
		else if (a >= '0' && a <= '9'){
			s1++;
		}
	    else if (a == ' '){
			s2++;
		}else {
			s3++;
		}
	}
	printf ("%d %d %d %d", s, s1, s2, s3);
}

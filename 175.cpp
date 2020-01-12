/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 175.cpp
*       &Created Time: 2019年11月30日 星期六 16时30分03秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <math.h>
int main(){
	int n = 0,n1 = 0, s = 0, s1 = 0, s2 = 0, s3 = 0;
	int a;
	scanf("%d\n",&n);
	n1 = n;
	while((n--) > 0){
		scanf("%d", &a);
		if (a >= 90 && a <= 100){
			s++;
		}else if (a >= 80 && a <= 89){
			s1++;
		}else if(a >= 60 && a <= 79){
			s2++;
		}else {
		    s3++;
		}
	}
	printf("You %d\n",s);
	printf("Liang %d\n",s1);
	printf("Zhong %d\n",s2);
	printf("Cha %d\n",s3);
	return 0;
}

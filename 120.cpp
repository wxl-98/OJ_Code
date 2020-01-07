/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 120.cpp
*       &Created Time: 2019年11月26日 星期二 22时47分28秒
*       &Description:
***********************************************************/
#include <stdio.h>
int main(){
	int year, month, day;
	scanf("%d %d %d",&year, &month, &day);
	if (month >= 1 && month <=12){
		if(month==1 || month == 3 || month == 5 || month == 7||month==8||month==10 || month == 12){
			if(day >= 1 && day <= 31){
				printf("YES");
			}else{
				printf("NO");
			}
		}else if(month == 4 || month == 6 || month == 9|| month == 11){
			if(day >= 1 && day <= 30){
				printf("YES");
			}else{
				printf("NO");
			}
		}else if(year % 100 != 0 && year % 4 == 0 ||year % 400 == 0){
			if (day >= 1 && day <= 29){
				printf("YES");
			}else{
				printf("NO");
			}
		}else if(day >= 1 && day <= 28){
			printf("YES");
		}else{
			printf("NO");
		}
	}else {
		printf("NO");
	}
}

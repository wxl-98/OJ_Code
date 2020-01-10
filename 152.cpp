/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 152.cpp
*       &Created Time: 2019年12月01日 星期日 01时57分15秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if (n == 1){
		printf("Thursday");
	}else if (n == 2){
		printf("Friday");
	}else if (n == 3){
		printf("Saturday");
	}else if (n == 4){
		printf("Sunday");
	}else if (n == 5){
		printf("Monday");
	}else if (n == 6){
		printf("Tuesday");
	}else {
		printf("Wednesday");
	}
	return 0;
}

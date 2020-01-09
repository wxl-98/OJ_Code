/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 139.cpp
*       &Created Time: 2019年11月27日 星期三 22时12分43秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;


	for (int i = 1; i <= n; i++){
		for (int j = 0; j < n - i; j++){
			printf(" ");
		}
		for (int j = 0; j < 2 * i; j++){
			printf("A");
		}
		printf("\n");
	}



	for (int i = n - 1; i > 0; i--){
		for (int j = 0; j < n -i; j++){
			printf(" ");
		}
		for (int j = 0; j < 2 * i; j++){
			printf("A");
		}
		printf("\n");
	}
	
	return 0;
}

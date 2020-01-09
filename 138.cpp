/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 138.cpp
*       &Created Time: 2019年11月27日 星期三 17时55分31秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i = n; i > 0; i--){
		for (int j = 1; j <= 2 * i ; j++){
			printf ("%c",'A');
		}
		printf("\n");
	}
	return 0;
}

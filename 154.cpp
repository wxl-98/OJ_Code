/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 154.cpp
*       &Created Time: 2019年11月27日 星期三 14时51分50秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i = n; i > 0; i--){
		printf ("%d",i);
		for (int j = i - 1; j > 0; j--){
			printf(" %d",j);
		}
      printf ("\n");
	}
	return 0;
}

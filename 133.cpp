/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 133.cpp
*       &Created Time: 2019年11月27日 星期三 16时12分32秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = i; j <= n; j++){
			printf("%d*%d=%d",i, j, i * j);
			if (j != n){
			printf("\t");
			}
		}
		printf("\n");
	}
	/*
	for (int i = 1; i <= n; i++){
	for (int j = i; j <= n; j++){
	j - i && cout << "\t";
	cout << i << "*" << j << "=" << i * j;
	}
	cout << endl;
	}

	   */
	return 0;
}

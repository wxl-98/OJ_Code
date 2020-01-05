/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 70.cpp
*       &Created Time: 2019年12月06日 星期五 16时12分45秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int panduan(int a){
	while(a % 2 == 0){
		a /= 2;
	}
	while (a % 3 == 0){
		a /= 3;
	}
	while (a % 5 == 0){
		a /= 5;
	}
	if (a == 1) return 1;
	else return 0;

}
int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		if(panduan(i)){
			cout << i << endl;
		}
	}
	return 0;
}

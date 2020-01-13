/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 187.cpp
*       &Created Time: 2019年12月02日 星期一 22时11分29秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

long long han(int n){
	if (n == 1) return 1;
	return han(n - 1) * 2 + 1;
}

long long shu(int x){
	if (x == 1) return 1;
	return shu(x - 1) * 2 + x;
}

int main(){
	int a;
	cin >> a;
	cout << han(a) << " " << shu(a) << endl;
	return 0; 
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 467.cpp
*       &Created Time: 2019年12月02日 星期一 22时38分17秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

long long J(int n){
	if (n < 2) return 1;
	return n * J(n - 1);
}


int main(){
	int a;
	cin >> a;
	cout << J(a) << endl;
	return 0;
}

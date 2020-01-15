/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 226.cpp
*       &Created Time: 2019年12月03日 星期二 20时03分49秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, p;
	cin >> a >> b >> p;
	int s = 1 % p;
	while(b){
		if (b & 1) s = (long long)s * a % p;
		a = (long long)a * a % p;
		b >>= 1;
	}
    cout << s << endl; 
	return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 35.cpp
*       &Created Time: 2019年12月06日 星期五 18时00分53秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	if (b > a && a >= 0){
		for (int i = a; i <= b; i++){
			cout << i << endl;
		}
	}
	
	if(a < 0){
		for (int i = 0; i <= b; i++){
			cout << i << endl;
		}
	}
	if(a == b || a > b || (a < 0 && b < 0)){
			cout << "ERROR" << endl;
		}

return 0;
}

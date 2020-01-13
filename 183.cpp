/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 183.cpp
*       &Created Time: 2019年12月02日 星期一 22时04分15秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int han(int x){
	if (x <= 0) return 0;
	if (x == 1) return 1;
	if (x > 1 && x % 2 == 0) return 3 * han(x / 2) - 1;
	return 3 * han((x + 1) / 2) - 1;
}


int main(){
    int n;
	cin >> n;
	cout << han(n) << endl;
	return 0;
}

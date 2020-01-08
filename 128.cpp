/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 128.cpp
*       &Created Time: 2019年11月27日 星期三 21时28分48秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum;
	for (int i = 0; i < n; i++){
		int s;
		cin >> s;
		sum  += s;
	}
	printf ("%.2f", 1.0 *sum / n);
	return 0;

}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 155.cpp
*       &Created Time: 2019年12月02日 星期一 16时30分34秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n, a = 3, sum  = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		a += 2 * i;
		sum += a;
		printf("%d\n", a);
	}
	printf("%d", sum);
	return 0;
}

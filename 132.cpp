/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 132.cpp
*       &Created Time: 2019年11月27日 星期三 15时06分44秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n, x;
	long long sum = 1;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		sum *= x;
	}
    printf("%lld",sum);
	return 0;
}

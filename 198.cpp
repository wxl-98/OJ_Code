/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 198.cpp
*       &Created Time: 2019年12月04日 星期三 16时58分34秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
#define MAX_N 1000000
#define s 1000000007

long long m[MAX_N + 5];
int f(int a){
	if (a == 1 || a == 2) return 1;
	if (!m[a]){
	m[a] = f(a - 1) + f(a - 2);
	}
	return m[a] % s;
}


int main(){
	int n;
	cin >> n;
	printf("%d\n", f(n));
	return 0;
}

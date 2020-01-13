/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 181.cpp
*       &Created Time: 2019年11月30日 星期六 21时54分21秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 1000
int main(){
	char a[MAX_N];
	cin >> a;
	int str = strlen(a);
	for (int i = 0; i < str; i++){
		if (a[i] >= 65 && a[i] <= 91){
			 a[i] += 32;
			 printf("%c", a[i]);
		}else {
			  a[i] -= 32;
			  printf("%c", a[i]);
		}
	}

return 0;
}

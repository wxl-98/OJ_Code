/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 148.cpp
*       &Created Time: 2019年12月01日 星期日 00时04分18秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s[51];
	cin >> s;
	for (int i = strlen(s) - 1; i >= 0; i--){
		printf("%c", s[i]);
	}
	return 0;
}

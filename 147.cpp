/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 147.cpp
*       &Created Time: 2019年11月30日 星期六 17时32分32秒
*       &Description:
***********************************************************/
#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
//	long a;
	cin >> a;
	if ((a[a.size() - 1] - '0') % 2 == 0){
		printf("YES");
	}else {
		printf("NO");
	}
	return 0;
}

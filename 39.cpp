/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 39.cpp
*       &Created Time: 2019年12月06日 星期五 16时45分18秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int n, begin;
	cin >> begin >> n;
	while (n--){
		if (begin % 2 != 0){
		    begin += 1;
			cout << begin << endl;
			begin += 2;
		}else if (begin < 0){
			begin = 0;
			cout << begin << endl;
			begin += 2;
		}else if(begin % 2 == 0){
			cout << begin << endl;
			begin += 2;
		}
	}
	return 0;
}

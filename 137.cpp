/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 137.cpp
*       &Created Time: 2019年11月27日 星期三 17时23分06秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n;
	char c = 'A';
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i ; j++){
		
			printf ("%c",c);
            c++;
		}
		printf ("\n");
	}
	return 0;
}

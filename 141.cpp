/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 141.cpp
*       &Created Time: 2019年11月30日 星期六 10时43分43秒
*       &Description:
***********************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	char a = 'A';
	for (int i = 1; i <= n + 1; i++){
		for (int k = 1; k <= i - 1; k++){
			if (i == 1) continue;
		    else cout << " ";
		}
		for (int j = n - i + 2; j >= 1; j--){
			printf("%c", a);
			a += 1;
			if (j == 1) 
				a -= 1;
		}
		a -= 1;
		for (int j = n - i + 1; j >= 1; j--){
		    printf("%c", a);
			a -= 1;
		}
		a += 2;
        cout << endl;
	}
    	a -= 2;
		for (int i = 1; i <= n; i++){
			for (int k = n - i; k >= 1; k--){
				cout << " ";
			}
			for (int j = 1; j <= i + 1; j++){
			    printf("%c", a);
				a += 1;
			}
			a -= 2;
			for (int j = 1; j <= i; j++){
				printf("%c", a);
				a -= 1;
			}
			cout << endl;
		}
  return 0;
}

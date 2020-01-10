/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 149.cpp
*       &Created Time: 2019年12月01日 星期日 02时05分19秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <string.h>
//using namespace std;
int main(){
	char s[51];
	int l = 0;
	scanf("%[^\n]s", s);
	for(int i = 0; i < 51; i++){
         
		if (s[i] == '\0'){
		for (int j = i - 1; j > 0; j--){
			if (s[j] == ' '){
			//	for (int k = j + 1; k < i - 1; k++){
					printf("%d", i - 1 - j);
					return 0;
			//	}
			}
		}
	//	printf("%d", l);
	}
	//	return 0;
	}
	return 0;
}

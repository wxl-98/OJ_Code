/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 146.cpp
*       &Created Time: 2019年12月01日 星期日 14时18分55秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <string.h>
//using namespace std;
int main(){
	char s[51];
	scanf("%s", &s);
	for (int i = 0; i < strlen(s); i++){
		if (s[i] >= 'A' && s[i] < 'Z' || s[i] >= 'a' && s[i] < 'z'){
			s[i] += 1;
			printf("%c",s[i]);
		}
	    else if (s[i] == 'Z'){
			s[i] = 'A';
			printf("%c",s[i]);
		}else if(s[i] == 'z'){
			s[i] = 'a';
			printf ("%c", s[i]);
		}
		else {
			printf("%c",s[i]);
		}
	
//	printf("%s", s[i]);
	}
	return 0;
}

/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 140.cpp
*       &Created Time: 2019年11月29日 星期五 21时44分02秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int n;
	char c = 'A';
//	c >= 'A' && c <= 'Z';
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j <= n - 1; j++){
			printf(" ");
		}
		for (int k = 0; k <= 2 * i ; k++){
		//	printf("A");
		    if (i == 0){
				printf ("A");
			}else {
				printf("%c",c);
			}
		//	printf ("%s", c);
		//	c++;
		}
		c += 1;
		printf("\n");
	}
//	printf("\n");
   c -= 1;
   for (int i = n - 1; i >= 1; i--){
	   for (int j = 1 ; j <= n - i; j++){
		   printf (" ");
	   }
	   c -= 1;
	   for (int k = 2 * i - 1; k >= 1; k--){
			  printf ("%c", c);
	
	   }
	   printf("\n");
   }
   return 0;
}


